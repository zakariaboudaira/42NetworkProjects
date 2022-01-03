/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zboudair <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 14:11:33 by zboudair          #+#    #+#             */
/*   Updated: 2021/11/18 10:27:57 by zboudair         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	ft_search(char	const *set, char c)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

static	char	*ft_cpy(int start, int end, int arrsize, char	const *s1)
{
	int		i;
	char	*arr;

	arr = malloc((arrsize + 2) * sizeof(char));
	if (arr == 0)
		return (0);
	i = 0;
	while (start <= end)
	{
		arr[i] = s1[start];
		i++;
		start++;
	}
	arr[i] = '\0';
	return (arr);
}

char	*ft_strtrim(char	const	*s1, char	const	*set)
{
	int		i;
	int		len;
	int		arrsize;
	char	*arr;

	i = 0;
	if (s1 == 0 || set == 0)
		return (0);
	while (s1[i] != '\0')
	{
		if (ft_search(set, s1[i]) == 0)
			break ;
		i++;
	}
	len = ft_strlen(s1) - 1;
	while (len > i)
	{
		if (ft_search(set, s1[len]) == 0)
			break ;
		len--;
	}
	arrsize = len - i;
	arr = ft_cpy(i, len, arrsize, s1);
	return (arr);
}
