/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoabase.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlernoul <tlernoul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/18 22:38:41 by tlernoul          #+#    #+#             */
/*   Updated: 2017/12/18 22:43:38 by tlernoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoabase(int n, int base)
{
	char	str[16] = "0123456789abcdef";
	char	*s;
	int		i;
	int		mult;

	mult = 1;
	i = ft_getndigits(n) - 1;
	if (!(s = ft_strnew(ft_getndigits(n))))
		return (0);
	if (n < 0)
	{
		s[0] = '-';
		mult = -1;
	}
	while ((n >= base || n <= -base) && (i != 0))
	{
		s[i] = str[(n % base) * mult];
		n = n / base;
		i--;
	}
	s[i] = str[n * mult];
	i--;
	return (s);
}
