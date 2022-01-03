/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zboudair <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 11:31:43 by zboudair          #+#    #+#             */
/*   Updated: 2021/11/20 14:46:03 by zboudair         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

static	int	wordsize(char	const *s, char c)
{
	int	i;

	i = 0;
	while (s[i] && s[i] != c)
		i++;
	return (i);
}

static	int	arrsize(char const *s, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (s[i] != '\0')
	{
		while (s[i] && s[i] == c)
			i++;
		if (s[i] != '\0')
			count++;
		while (s[i] && s[i] != c)
			i++;
	}
	return (count);
}

static char	freesplt(char **split, int k)
{
	while (k >= 0)
	{
		free(split[k]);
		k--;
	}
	free(split);
	return (0);
}

static void	ft_splt(char const *s, char c, char **split)
{
	int	i;
	int	k;
	int	wordlen;

	i = 0;
	k = 0;
	while (s[i] != '\0')
	{
		while (s[i] && s[i] == c)
			i++;
		if (s[i] != '\0')
		{
			wordlen = wordsize(s + i, c);
			split[k++] = ft_substr(s, i, wordlen);
			if (split[k - 1] == 0)
				freesplt(split, (k - 2));
			i += wordlen;
		}
	}
	split[k] = 0;
}

char	**ft_split(char	const *s, char c)
{
	char	**split;

	if (s == 0)
		return (0);
	split = (char **)malloc(sizeof(char *) * (arrsize(s, c) + 1));
	if (split == 0)
		return (0);
	ft_splt(s, c, split);
	return (split);
}
