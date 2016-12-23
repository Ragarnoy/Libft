/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlernoul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/02 18:57:11 by tlernoul          #+#    #+#             */
/*   Updated: 2016/12/07 14:20:27 by tlernoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>
#include "libft.h"

char	*ft_strnew(size_t size)
{
	char *s;

	if (!(s = (char *)malloc(sizeof(*s) * (size) + 1)))
		return (NULL);
	ft_memset(s, '\0', size + 1);
	return (s);
}
