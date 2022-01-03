/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zboudair <zboudair@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/19 14:58:09 by zboudair          #+#    #+#             */
/*   Updated: 2022/01/03 14:32:47 by zboudair         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

void	send_char(int pid, unsigned char c)
{
	unsigned char		b;

	b = 1 << 6;
	while (b)
	{
		if (c & b)
		{
			if (kill(pid, SIGUSR1) == -1)
				ft_error("bad pid\n");
		}
		else
		{
			if (kill(pid, SIGUSR2) == -1)
				ft_error("bad pid\n");
		}
		b >>= 1;
		usleep(50);
	}
}

void	handler(char *spid, char *str)
{
	int			pid;
	int			i;

	i = 0;
	pid = ft_atoi(spid);
	while (str[i])
	{
		send_char(pid, str[i]);
		i++;
	}
	send_char(pid, str[i]);
}

int	main(int ac, char **argv)
{
	if (ac == 3)
		handler(argv[1], argv[2]);
	return (0);
}
