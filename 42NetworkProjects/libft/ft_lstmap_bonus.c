/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zboudair <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 11:34:09 by zboudair          #+#    #+#             */
/*   Updated: 2021/11/15 12:58:45 by zboudair         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list	*lst, void	*(*f)(void	*), void	(*del)(void	*))
{
	t_list	*list;
	t_list	*iter;

	if (!lst)
		return (0);
	iter = ft_lstnew(f(lst->content));
	if (!iter)
		return (0);
	list = iter;
	lst = lst->next;
	while (lst != 0)
	{
		iter->next = ft_lstnew(f(lst->content));
		if (iter->next == 0)
		{
			ft_lstclear(&list, del);
			return (0);
		}
		lst = lst->next;
		iter = iter->next;
	}
	return (list);
}
