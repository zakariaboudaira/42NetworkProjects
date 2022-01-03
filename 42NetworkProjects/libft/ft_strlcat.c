/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strlcat.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zboudair <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 16:47:26 by zboudair          #+#    #+#             */
/*   Updated: 2021/11/20 15:40:37 by zboudair         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	total;

	i = 0;
	j = 0;
	while (src[i])
		i++;
	if (!dest && !size)
		return (i);
	while (dest[j])
		j++;
	if (j <= size)
		total = i + j;
	else
		return (i + size);
	i = 0;
	while (src[i] && j + 1 < size)
		dest[j++] = src[i++];
	dest[j] = '\0';
	return (total);
}
