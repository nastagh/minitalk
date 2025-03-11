#include "minitalk.h"

void send_char (__pid_t pid, char c)
{
	int	i;

	i = 7;
	while (i >= 0)
	{
		if( (c >> i) & 1)
			kill(pid, SIGUSR2);
		else
			kill(pid, SIGUSR1);
		i--;
		usleep(500);
	}
}

// usleep(100) to make sure that server have enough time to work on data (dont put of it in stek)

int main (int argc, char **argv)
{
	__pid_t		pid;
	char	*message;

	if(argc != 3)
	{
		ft_printf("Usage: ./client <PID> <message>\n");
		return (1);
	}
	pid = ft_atoi(argv[1]);
	message = argv[2];
	while (*message)
	{
		send_char(pid, *message);
		message++;
	}
	send_char(pid, '\0');
	return (0);
}