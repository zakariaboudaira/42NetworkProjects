/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strrchr.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zboudair <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 10:26:20 by zboudair          #+#    #+#             */
/*   Updated: 2021/11/20 15:20:45 by zboudair         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrchr(const	char	*str, int c)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	if ((char )c == 0)
	{
		return ((char *)str + i);
	}
	while (--i >= 0)
	{
		if (str[i] == (char )c)
		{
			return ((char *)str + i);
		}
	}
	return (0);
}
