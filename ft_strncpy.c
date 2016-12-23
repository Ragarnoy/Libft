/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlernoul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/11 16:44:26 by tlernoul          #+#    #+#             */
/*   Updated: 2016/11/29 20:54:50 by tlernoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

char	*ft_strncpy(char *dest, const char *src, size_t n)
{
	size_t i;

	i = 0;
	while (i < n)
	{
		if (i < ft_strlen(src))
		{
			dest[i] = src[i];
		}
		else
			dest[i] = '\0';
		i++;
	}
	return (dest);
}
