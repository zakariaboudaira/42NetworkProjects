/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zboudair <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 18:22:42 by zboudair          #+#    #+#             */
/*   Updated: 2021/11/18 10:16:32 by zboudair         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*ft_calloc(size_t count, size_t size)
{
	size_t			i;
	unsigned char	*arr;

	arr = malloc(size * count);
	if (arr == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (i < size * count)
	{
		arr[i] = 0;
		i++;
	}
	return (arr);
}
