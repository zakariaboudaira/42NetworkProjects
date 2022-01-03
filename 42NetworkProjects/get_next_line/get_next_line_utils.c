/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zboudair <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/03 19:03:33 by zboudair          #+#    #+#             */
/*   Updated: 2021/12/03 20:27:03 by zboudair         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int	ft_strchr(char *str)
{
	int	i;

	i = 0;
	if (str == 0)
		return (0);
	while (str[i])
	{
		if (str[i] == '\n')
			return (1);
		i++;
	}
	return (0);
}

size_t	ft_strlen(char *str)
{
	int	i;

	i = 0;
	if (!str)
		return (0);
	while (str[i])
		i++;
	return (i);
}

char	*ft_strdup(char *val)
{
	int		i;
	int		len;
	char	*copy;

	if (val == 0)
		return (0);
	len = ft_strlen(val);
	copy = (char *)malloc(len * sizeof(char) + 1);
	if (copy == NULL)
		return (0);
	i = 0;
	while (val[i] && val[i] != '\n')
	{
		copy[i] = val[i];
		i++;
	}
	if (val[i] == '\n')
		copy[i++] = '\n';
	copy[i] = '\0';
	return (copy);
}

char	*ft_strjoin(char *val, char *buffer)
{
	int		size;
	int		i;
	int		j;
	char	*arr;

	i = 0;
	j = 0;
	if (buffer == NULL)
		return (0);
	size = ft_strlen(val) + ft_strlen(buffer);
	arr = malloc((size + 1) * sizeof(char));
	if (arr == 0)
		return (0);
	if (val)
	{
		while (val[j] && i < size)
			arr[i++] = val[j++];
	}
	j = 0;
	while (buffer[j] && i < size)
		arr[i++] = buffer[j++];
	arr[i] = '\0';
	free(val);
	return (arr);
}
