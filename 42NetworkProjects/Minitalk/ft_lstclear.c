/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zboudair <zboudair@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/19 16:49:11 by zboudair          #+#    #+#             */
/*   Updated: 2021/12/20 10:43:11 by zboudair         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

void	ft_lstclear(t_msg **g_lst)
{
	t_msg	*g_current;
	t_msg	*g_next;

	g_current = *g_lst;
	g_next = NULL;
	if ((g_lst != 0))
	{
		while (g_current != NULL)
		{
			g_next = g_current->next;
			free(g_current);
			g_current = g_next;
		}
		*g_lst = NULL;
	}
}
