/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zboudair <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/03 19:03:51 by zboudair          #+#    #+#             */
/*   Updated: 2021/12/03 19:16:21 by zboudair         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*get_next_line(int fd)
{
	static char	*val;
	char		*ret;

	if (fd < 0)
		return (0);
	val = ft_fill(val, fd);
	if (!val)
		return (0);
	ret = ft_strdup(val);
	val = ft_cut(val);
	return (ret);
}

char	*ft_fill(char *val, int fd)
{
	char	*buffer;
	int		size;

	size = 1;
	buffer = malloc(sizeof(char) * (BUFFER_SIZE + 1));
	if (buffer == 0)
		return (0);
	while (!ft_strchr(val) && size != 0)
	{
		size = read(fd, buffer, BUFFER_SIZE);
		if (size == -1)
		{
			free(buffer);
			return (0);
		}
		buffer[size] = '\0';
		val = ft_strjoin(val, buffer);
	}
	free(buffer);
	if (size == 0 && val[0] == 0)
	{
		free(val);
		return (0);
	}
	return (val);
}

char	*ft_cut(char *val)
{
	int		i;
	int		len;
	int		j;
	char	*s;

	j = 0;
	i = 0;
	if (val == 0)
		return (0);
	len = ft_strlen(val);
	i = 0;
	while (val[i] && val[i] != '\n')
		i++;
	if (i == len)
	{
		free(val);
		return (NULL);
	}
	s = ft_allocate(val, (len - i), i);
	if (s == 0)
		return (0);
	free(val);
	return (s);
}

char	*ft_allocate(char *val, int size, int i)
{
	char	*s;
	int		j;

	j = 0;
	s = malloc(sizeof(char) + size);
	if (s == 0)
		return (0);
	i++;
	while (val[i])
		s[j++] = val[i++];
	s[j] = '\0';
	return (s);
}
