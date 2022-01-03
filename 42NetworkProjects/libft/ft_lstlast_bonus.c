/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zboudair <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/14 14:28:16 by zboudair          #+#    #+#             */
/*   Updated: 2021/11/14 17:00:00 by zboudair         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list	*lst)
{
	t_list	*head;

	if (lst == NULL)
		return (NULL);
	head = lst;
	while ((head->next) != NULL)
	{
		head = head->next;
	}
	return (head);
}
