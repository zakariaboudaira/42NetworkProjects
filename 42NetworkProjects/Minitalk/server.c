/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zboudair <zboudair@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/19 14:57:09 by zboudair          #+#    #+#             */
/*   Updated: 2022/01/03 15:28:36 by zboudair         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

void	print_pid(void)
{
	int		pid;

	pid = getpid();
	write(1, "pid: ", 5);
	ft_putnbr(pid);
	write(1, "\n", 1);
}

t_msg	*g_theinfo;

void	handler_sigusr(int sig)
{
	if (g_theinfo->current_bit == 0)
	{
		g_theinfo->current_bit = 1 << 6;
		(g_theinfo->current_byte) += 1;
	}
	if (sig == SIGUSR1)
		g_theinfo->data[g_theinfo->current_byte] += g_theinfo->current_bit;
	g_theinfo->current_bit >>= 1;
	if (g_theinfo->current_byte == BUFFSIZE - 1 && !g_theinfo->current_bit)
		g_theinfo->overflow = 1;
	else if (g_theinfo->data[g_theinfo->current_byte] == 0
		&& g_theinfo->current_bit == 0)
	{
			g_theinfo->received = 1;
	}
}

int	main_handler(void)
{
	t_msg	*head;

	head = g_theinfo;
	while (1)
	{
		pause();
		if (g_theinfo->received)
		{
			ft_dataprinter(head);
			ft_lstclear(&head);
			g_theinfo = ft_lstnew();
			head = g_theinfo;
		}
		else if (g_theinfo->overflow)
		{
			g_theinfo->next = ft_lstnew();
			if (!g_theinfo->next)
			{
				ft_lstclear(&head);
				exit(1);
			}
			g_theinfo = g_theinfo->next;
		}
	}
}

int	main(void)
{	
	struct sigaction	s1;
	struct sigaction	s2;

	g_theinfo = ft_lstnew();
	s1.sa_handler = handler_sigusr;
	s1.sa_flags = SA_SIGINFO;
	if (sigaction(SIGUSR1, &s1, NULL) != 0)
		ft_error("signal error\n");
	if (sigaction(SIGUSR2, &s1, NULL) != 0)
		ft_error("signal error\n");
	print_pid();
	main_handler();
}
