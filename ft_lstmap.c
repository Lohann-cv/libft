/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcoant-- <lcoant--@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/20 15:46:09 by lcoant--          #+#    #+#             */
/*   Updated: 2026/04/20 16:00:40 by lcoant--         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_lst;
	t_list	*current_element;
	t_list	*tmp;

	if (!lst || !del || !f)
		return (NULL);
	new_lst = NULL;
	tmp = NULL;
	while (lst)
	{
		current_element = ft_lstnew(f(lst->content));
		if (!current_element)
		{
			ft_lstclear(&new_lst, del);
			return (NULL);
		}
		if (!new_lst)
			new_lst = current_element;
		else
			tmp->next = current_element;
		tmp = current_element;
		lst = lst->next;
	}
	return (new_lst);
}
