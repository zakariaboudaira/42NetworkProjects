/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zboudair <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 18:45:50 by zboudair          #+#    #+#             */
/*   Updated: 2021/11/18 10:25:08 by zboudair         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*result;
	unsigned int	i;
	int				j;

	if (s == NULL || f == NULL)
		return (NULL);
	result = malloc(ft_strlen(s) + 1);
	if (result == 0)
		return (0);
	j = 0;
	while (s[j] != '\0')
	{
		result[j] = s[j];
		j++;
	}
	result[j] = '\0';
	i = 0;
	while (result[i])
	{
		result[i] = (*f)(i, result[i]);
		i++;
	}
	return (result);
}
