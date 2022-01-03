/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strnstr.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zboudair <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 15:16:26 by zboudair          #+#    #+#             */
/*   Updated: 2021/11/18 10:26:09 by zboudair         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strnstr(const char	*str, const char	*to_find, size_t	n)
{
	size_t		i;
	size_t		j;

	i = 0;
	if (to_find[i] == '\0')
	{
		return ((char *)(str));
	}
	while (n > i && str[i] != '\0')
	{
		j = 0;
		while ((i + j) < n && str[i + j] == to_find[j])
		{	
			j++;
			if (to_find[j] == '\0')
			{
				return ((char *)(&str[i]));
			}
		}
		i++;
	}
	return (0);
}
