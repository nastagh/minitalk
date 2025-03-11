#include "minitalk.h"

void handle_signal(int sig)
{
	static char	character;
	static int bit;

	//character = 0;
	//bit = 0;
	if (sig == SIGUSR1)
		character = character << 1;
	else
		character = (character << 1) | 1;
	bit++;
	if (bit == 8)
	{
		if (character == '\0')
			ft_printf("\n");
		else
			ft_printf("%c", character);
		bit = 0;
		character = 0;
	}
}

int main(int argc, char **argv) {

	(void) argv;
	if (argc != 1)
	{
		ft_printf("Error\n");
		return (1);
	}
	
	ft_printf("Server PID: %d\n", getpid());
	signal(SIGUSR1, handle_signal);
	signal(SIGUSR2, handle_signal);
	while (1)
		pause();
	return 0;
}


// while (1) pause() - infinit loop; wait for signals and keep running;
// server never stops running
// Without pause(), the server would exit immediately after setup, without waiting for messages