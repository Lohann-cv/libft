/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcoant-- <lcoant--@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/20 15:57:12 by lcoant--          #+#    #+#             */
/*   Updated: 2026/04/20 15:57:22 by lcoant--         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (little[0] == '\0')
		return ((char *)big);
	while (big[i] && i < len)
	{
		while (i + j < len && big[i + j] && big[i + j] == little[j])
		{
			j++;
			if (little[j] == '\0')
				return ((char *)&big[i]);
		}
		j = 0;
		i++;
	}
	return (NULL);
}
