/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zboudair <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 16:25:19 by zboudair          #+#    #+#             */
/*   Updated: 2021/11/26 15:40:30 by zboudair         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>

void	ft_putchar(char c, int *count);
void	ft_putstr(char *s, int *count);
void	ft_putnbr(int nb, int *count);
int		ft_printf(const char *s, ...);
void	ft_unsputnbr(unsigned int nb, int *count);
void	ft_lower_base_converter(unsigned long nbr, int *count);
void	ft_upper_base_converter(unsigned int nbr, int *count);

#endif
