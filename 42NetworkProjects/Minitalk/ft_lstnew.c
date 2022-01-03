/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zboudair <zboudair@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/19 16:27:05 by zboudair          #+#    #+#             */
/*   Updated: 2021/12/20 13:55:03 by zboudair         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

t_msg	*ft_lstnew(void)
{
	t_msg	*g_head;

	g_head = malloc(sizeof(t_msg));
	if (g_head == NULL)
		return (NULL);
	ft_bzero(g_head->data, BUFFSIZE);
	g_head->current_bit = 1 << 6;
	g_head->current_byte = 0;
	g_head->overflow = 0;
	g_head->received = 0;
	g_head->next = NULL;
	return (g_head);
}
