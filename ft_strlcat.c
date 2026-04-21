/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcoant-- <lcoant--@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/20 15:56:24 by lcoant--          #+#    #+#             */
/*   Updated: 2026/04/20 15:56:29 by lcoant--         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dsize)
{
	size_t	i;
	size_t	dst_len;
	size_t	src_len;

	i = 0;
	dst_len = 0;
	src_len = ft_strlen(src);
	while (dst_len < dsize && dst[dst_len])
		dst_len++;
	if (dst_len == dsize)
		return (dsize + src_len);
	while (src[i] && (dst_len + i + 1 < dsize))
	{
		dst[dst_len + 1] = src[i];
		i++;
	}
	if (dst_len + 1 < dsize)
		dst[dst_len + i] = '\0';
	return (dst_len + src_len);
}
