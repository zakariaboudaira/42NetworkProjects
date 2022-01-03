/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_unsputnbr_fd.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zboudair <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 10:14:38 by zboudair          #+#    #+#             */
/*   Updated: 2021/11/26 15:55:29 by zboudair         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_unsputnbr(unsigned int nb, int *count)
{
	unsigned int	nbr;

	nbr = nb;
	if (nbr >= 10)
	{
		ft_unsputnbr((nbr / 10), count);
	}
	ft_putchar(nbr % 10 + '0', count);
}
