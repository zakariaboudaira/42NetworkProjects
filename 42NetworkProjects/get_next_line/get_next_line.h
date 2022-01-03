/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zboudair <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 11:05:12 by zboudair          #+#    #+#             */
/*   Updated: 2021/12/03 20:30:15 by zboudair         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <stdlib.h>
# include <fcntl.h>
# include <unistd.h>

char	*ft_strjoin(char *val, char *buffer);
int		ft_strchr(char *str);
char	*ft_strdup(char *val);
size_t	ft_strlen(char *str);
char	*get_next_line(int fd);
char	*ft_fill(char *val, int fd);
char	*ft_cut(char *val);
char	*ft_allocate(char *val, int size, int i);

#endif
