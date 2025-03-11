#define _POSIX_C_SOURCE 200809L
#include "minitalk.h"

__pid_t	client_pid = 0;

void	handle_signal(int sig, siginfo_t *info, void *context)
{
	static char	character;
	static int	bit;

	(void)context;
	if (!client_pid)
		client_pid = info->si_pid;
	if (sig == SIGUSR1)
		character = character << 1;
	else
		character = (character << 1) | 1;
	bit++;
	if (bit == 8)
	{
		if (character == '\0')
		{
			ft_printf("\n");
			if(client_pid)
				kill(client_pid, SIGUSR2);
			client_pid = 0;
		}
		else
			ft_printf("%c", character);
		bit = 0;
		character = 0;
	}
}

int	main(int argc, char **argv)
{
	struct sigaction	sa;

	(void)argv;
	if (argc != 1)
	{
		ft_printf("Error\n");
		return (1);
	}
	ft_printf("Server PID: %d\n", getpid());
	sa.sa_sigaction = handle_signal;
	sa.sa_flags = SA_SIGINFO;
	sigemptyset(&sa.sa_mask);
	sigaction(SIGUSR1, &sa, NULL);
	sigaction(SIGUSR2, &sa, NULL);
	while (1)
		pause();
	return (0);
}

// sa.sa_flags = SA_SIGINFO allow to get more info about signal (senders PID)
// sigemptyset(&sa.sa_mask) not ignore another signals working handler