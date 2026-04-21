/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcoant-- <lcoant--@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/20 15:57:37 by lcoant--          #+#    #+#             */
/*   Updated: 2026/04/21 13:57:40 by lcoant--         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	j;
	size_t	k;
	char	*res;

	i = 0;
	k = 0;
	j = ft_strlen(s1);
	if (!set || !s1)
		return (NULL);
	while (s1[i] && ft_strchr(set, s1[i]))
		i++;
	while (ft_strchr(set, s1[j - 1]) && j > i)
		j--;
	res = malloc(sizeof(char) * (j - i + 1));
	if (!res)
		return (NULL);
	while (i < j)
		res[k++] = s1[i++];
	res[k] = '\0';
	return (res);
}
/*
#include <stdio.h>

int	main(int argc, char *argv[])
{
	// char const  *s1 = "Je suis globiboulga";
	// char const  *set = "su";
	(void)argc;
	printf("%s\n", ft_strtrim((char const *)argv[1], (char const *)argv[2]));
	return (0);
}*/
