/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcoant-- <lcoant--@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/20 15:49:39 by lcoant--          #+#    #+#             */
/*   Updated: 2026/04/20 15:51:01 by lcoant--         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_count_word(char const *s, char c)
{
	size_t	i;
	size_t	word_count;

	i = 0;
	word_count = 0;
	while (s[i])
	{
		if (s[i] != c)
		{
			word_count++;
			while (s[i] != c && s[i])
				i++;
		}
		else
			i++;
	}
	return (word_count + 1);
}

static char	*ft_splitdup(char const *s, char c, size_t *i)
{
	char	*ptr;
	size_t	j;
	size_t	k;

	j = 0;
	k = *i;
	while (s[k] != c && s[k])
		k++;
	ptr = malloc(sizeof(char) * ((k - *i) + 1));
	if (!ptr)
		return (NULL);
	while (s[*i] != c && s[*i])
	{
		ptr[j] = s[*i];
		(*i)++;
		j++;
	}
	ptr[j] = '\0';
	return (ptr);
}

static char	**ft_free_all(char **array, size_t j)
{
	size_t	i;

	i = 0;
	while (i < j)
	{
		free(array[i]);
		i++;
	}
	free(array);
	return (NULL);
}

static char	**ft_needplace(char **array, size_t j)
{
	array[j] = NULL;
	return (array);
}

char	**ft_split(char const *s, char c)
{
	size_t	i;
	size_t	j;
	char	**array;

	if (!s || c == '\0')
		return (NULL);
	array = malloc(sizeof(char *) * ft_count_word(s, c));
	if (!array)
		return (NULL);
	i = 0;
	j = 0;
	while (s[i])
	{
		if (s[i] != c)
		{
			array[j] = ft_splitdup(s, c, &i);
			if (!array[j])
				return (ft_free_all(array, j));
			j++;
		}
		else
			i++;
	}
	return (ft_needplace(array, j));
}

/*#include <stdio.h>

int	main(int argc, char *argv[])
{
	size_t		i;
	char const	*s;
	char		c;
	char		**array;

	i = 0;
	s = "Je   suis    baobao le chat";
	c = ' ';
	(void)argc;
	(void)argv;
	array = ft_split(s, c);
	while (array[i])
	{
		printf("|%s|", array[i]);
		i++;
	}
	printf("\n");
	return (0);
}*/
