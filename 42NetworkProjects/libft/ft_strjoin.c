/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zboudair <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 17:36:33 by zboudair          #+#    #+#             */
/*   Updated: 2021/11/18 10:22:55 by zboudair         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		dstsize;
	int		i;
	int		j;
	char	*arr;

	if (!s1 || !s2)
		return (NULL);
	dstsize = ft_strlen(s1) + ft_strlen(s2);
	arr = malloc((dstsize + 1) * sizeof(char));
	if (arr == 0)
		return (0);
	i = 0;
	j = 0;
	while (i < dstsize && s1[j] != '\0')
	{
		arr[i++] = s1[j++];
	}
	j = 0;
	while (i < dstsize)
	{
		arr[i++] = s2[j++];
	}
	arr[i] = '\0';
	return (arr);
}
