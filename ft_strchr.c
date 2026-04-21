/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcoant-- <lcoant--@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/20 15:51:05 by lcoant--          #+#    #+#             */
/*   Updated: 2026/04/20 15:51:11 by lcoant--         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int		i;
	char	*s_ptr;

	i = 0;
	s_ptr = (char *)s;
	while (s_ptr[i])
	{
		if (s_ptr[i] == c)
			return (&s_ptr[i]);
		i++;
	}
	if ((char)c == '\0')
		return (&s_ptr[i]);
	return (NULL);
}
