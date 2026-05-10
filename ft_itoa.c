/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcoant-- <lcoant--@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/20 15:42:49 by lcoant--          #+#    #+#             */
/*   Updated: 2026/04/22 08:52:34 by lcoant--         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_intlen(int n)
{
	size_t	len;
	long	nb;

	nb = n;
	len = 0;
	if (nb <= 0)
		len++;
	while (nb != 0)
	{
		nb /= 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	size_t	n_len;
	char	*n_char;
	long	nb;

	n_len = ft_intlen(n);
	n_char = malloc(sizeof(char) * (n_len + 1));
	if (!n_char)
		return (NULL);
	n_char[n_len] = '\0';
	nb = n;
	if (nb == 0)
		n_char[0] = '0';
	if (nb < 0)
		nb = -nb;
	while (nb > 0)
	{
		n_char[--n_len] = (nb % 10) + '0';
		nb /= 10;
	}
	if (n < 0)
		n_char[0] = '-';
	return (n_char);
}

/*#include <stdio.h>
int	main(int argc, char *argv[])
{
  (void)argc;
  printf("%s\n", ft_itoa(atoi(argv[1])));
  return (0);
}*/
