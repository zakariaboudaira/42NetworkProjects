/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zboudair <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/03 20:41:54 by zboudair          #+#    #+#             */
/*   Updated: 2021/12/03 20:42:01 by zboudair         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_BONUS_H
# define GET_NEXT_LINE_BONUS_H

# include <stdlib.h>
# include <fcntl.h>
# include <unistd.h>
# include <limits.h> 

char	*ft_strjoin(char *val, char *buffer);
int		ft_strchr(char *str);
char	*ft_strdup(char *val);
size_t	ft_strlen(char *str);
char	*get_next_line(int fd);
char	*ft_fill(char *val, int fd);
char	*ft_cut(char *val);
char	*ft_allocate(char *val, int size, int i);

#endif
