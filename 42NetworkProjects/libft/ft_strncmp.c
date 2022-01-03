/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strncmp.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zboudair <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 14:27:07 by zboudair          #+#    #+#             */
/*   Updated: 2021/11/18 10:25:40 by zboudair         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strncmp(const	char	*s1, const	char	*s2, size_t n)
{
	size_t	i;

	i = 0;
	while (n > i && (((unsigned char *)s1)[i] == ((unsigned char *)s2)[i])
		&& (((unsigned char *)s1) != '\0' && ((unsigned char *)s2)[i] != '\0'))
	{
		i++;
	}
	if (i == n)
		return (0);
	return (((unsigned char *)s1)[i] - ((unsigned char *)s2)[i]);
}
