/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_outnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zboudair <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 11:35:45 by zboudair          #+#    #+#             */
/*   Updated: 2021/11/26 15:51:27 by zboudair         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_lower_base_converter(unsigned long nbr, int *count)
{
	unsigned int	base_size;
	char			*base;

	base = "0123456789abcdef";
	base_size = 16;
	if (nbr >= base_size)
		ft_lower_base_converter(nbr / base_size, count);
	ft_putchar(base[nbr % base_size], count);
}
