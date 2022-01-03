/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   atoi.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zboudair <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 16:41:03 by zboudair          #+#    #+#             */
/*   Updated: 2021/11/19 11:51:28 by zboudair         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define LONG_MAX 9223372036854775807

int	ft_atoi(const char	*str)
{
	int				i;
	unsigned long	res;
	int				sign;

	i = 0;
	res = 0;
	sign = 1;
	while ((str[i] >= 9 && str[i] <= 13) || (str[i] == ' '))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	while ((str[i] >= '0') && (str[i] <= '9'))
	{
		res = ((res * 10) + (str[i] - '0'));
		if (sign == 1 && res > LONG_MAX)
			return (-1);
		else if (sign == -1 && res > (unsigned long )LONG_MAX + 1)
			return (0);
		i++;
	}
	return ((int )res * sign);
}
