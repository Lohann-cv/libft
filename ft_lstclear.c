/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcoant-- <lcoant--@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/20 15:43:50 by lcoant--          #+#    #+#             */
/*   Updated: 2026/04/20 15:44:54 by lcoant--         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*element;

	if (!lst || !del)
		return ;
	element = *lst;
	while (element)
	{
		ft_lstdelone(element, del);
		element = element->next;
	}
	*lst = NULL;
	return ;
}
