/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcoant-- <lcoant--@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/20 15:57:26 by lcoant--          #+#    #+#             */
/*   Updated: 2026/04/20 15:57:33 by lcoant--         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*s_ptr;

	s_ptr = (char *)s;
	i = ft_strlen(s);
	while (0 <= i)
	{
		if (s_ptr[i] == (char)c)
			return (&s_ptr[i]);
		i--;
	}
	return (NULL);
}
