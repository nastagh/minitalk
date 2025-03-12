/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client_bonus.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amikhail <amikhail@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/12 12:12:41 by amikhail          #+#    #+#             */
/*   Updated: 2025/03/12 15:17:59 by amikhail         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define _POSIX_C_SOURCE 200809L
#include "minitalk.h"

void	confirm_msg(int signal)
{
	if (signal == SIGUSR2)
		ft_printf("\nMessage received by the server.\n");
}

void	send_char(__pid_t server_pid, char c)
{
	int	i;

	i = 7;
	while (i >= 0)
	{
		if ((c >> i) & 1)
			kill(server_pid, SIGUSR2);
		else
			kill(server_pid, SIGUSR1);
		i--;
		usleep(100);
	}
}

int	main(int argc, char **argv)
{
	__pid_t				server_pid;
	char				*message;
	struct sigaction	sa;

	if (argc != 3)
	{
		ft_printf("Usage: ./%s <PID> <message>\n", argv[0]);
		return (1);
	}
	server_pid = ft_atoi(argv[1]);
	sa.sa_handler = confirm_msg;
	sa.sa_flags = 0;
	sigemptyset(&sa.sa_mask);
	sigaction(SIGUSR2, &sa, NULL);
	message = argv[2];
	while (*message)
	{
		send_char(server_pid, *message);
		message++;
	}
	send_char(server_pid, '\0');
	pause();
	return (0);
}
