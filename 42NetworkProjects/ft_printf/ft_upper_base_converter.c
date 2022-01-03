/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_Uputnbr_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zboudair <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 14:35:36 by zboudair          #+#    #+#             */
/*   Updated: 2021/11/26 15:49:09 by zboudair         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_upper_base_converter(unsigned int nbr, int *count)
{
	unsigned int	base_size;
	char			*base;

	base = "0123456789ABCDEF";
	base_size = 16;
	if (nbr >= base_size)
		ft_upper_base_converter(nbr / base_size, count);
	ft_putchar(base[nbr % base_size], count);
}
