/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strclenc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlernoul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/02 17:50:07 by tlernoul          #+#    #+#             */
/*   Updated: 2017/10/02 17:52:43 by tlernoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strclenc(const char *s, char b, char c)
{
	size_t i;

	i = 0;
	while (*s != b)
		s++;
	if (s)
		while (s[i] != c)
			i++;
	else
		return (0);
	return (i);
}
