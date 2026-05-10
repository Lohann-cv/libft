/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcoant-- <lcoant--@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/20 15:43:50 by lcoant--          #+#    #+#             */
/*   Updated: 2026/04/23 21:09:23 by lcoant--         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*element;

	if (!lst || !del)
		return ;
	element = *lst;
	while (*lst)
	{
		element = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = element;
	}
	return ;
}
