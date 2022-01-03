/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zboudair <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 12:47:17 by zboudair          #+#    #+#             */
/*   Updated: 2021/11/27 12:24:46 by zboudair         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static	void	ft_conditions(va_list ptr, int *count, char s);
static	void	ft_ptr_printer(unsigned long n, int *count);
static	void	ft_str_printer(char *str, int *count);

int	ft_printf(const char *s, ...)
{	
	int		i;
	int		count;
	va_list	ptr;

	count = 0;
	i = 0;
	va_start(ptr, s);
	while (s[i])
	{
		if (s[i] == '%' && s[i + 1] != '\0')
		{
			i++;
			ft_conditions(ptr, &count, s[i]);
		}
		else if (s[i] && s[i] != '%')
			ft_putchar(s[i], &count);
		i++;
	}
	va_end(ptr);
	return (count);
}

void	ft_conditions(va_list ptr, int *count, char s)
{
	if (s == 'd' || s == 'i')
		ft_putnbr((va_arg(ptr, int)), count);
	else if (s == 's')
		ft_str_printer((va_arg(ptr, char *)), count);
	else if (s == 'c')
		ft_putchar(va_arg(ptr, int), count);
	else if (s == 'u')
		ft_unsputnbr((va_arg(ptr, int)), count);
	else if (s == 'x')
		ft_lower_base_converter(va_arg(ptr, unsigned int), count);
	else if (s == 'X')
		ft_upper_base_converter(va_arg(ptr, unsigned int), count);
	else if (s == 'p')
		ft_ptr_printer(((unsigned long)va_arg(ptr, void *)), count);
	else
	{
		ft_putchar(s, count);
	}
}

static	void	ft_ptr_printer(unsigned long n, int *count)
{
	ft_putstr("0x", count);
	ft_lower_base_converter(n, count);
}

static	void	ft_str_printer(char *str, int *count)
{
	if (str == NULL)
		str = "(null)";
	ft_putstr(str, count);
}
