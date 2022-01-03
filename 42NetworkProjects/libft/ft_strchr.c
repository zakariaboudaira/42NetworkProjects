/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strcchr.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zboudair <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 19:15:30 by zboudair          #+#    #+#             */
/*   Updated: 2021/11/20 15:19:30 by zboudair         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strchr(const	char *str, int c)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] == (char )c)
			return ((char *) &str[i]);
		i++;
	}
	if ((char )c == '\0')
	{
		return ((char *)str + i);
	}
	return (0);
}