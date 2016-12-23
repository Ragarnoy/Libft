/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlernoul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/26 18:43:19 by tlernoul          #+#    #+#             */
/*   Updated: 2016/12/15 19:40:30 by tlernoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	i;
	char	*occ;

	occ = NULL;
	i = 0;
	if (c == '\0')
		return ((char*)s + ft_strlen(s));
	while (s[i])
	{
		if (s[i] == (char)c)
			occ = ((char*)s + i);
		i++;
	}
	return (occ);
}
