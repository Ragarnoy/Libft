/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlernoul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/28 18:08:37 by tlernoul          #+#    #+#             */
/*   Updated: 2016/12/01 19:23:42 by tlernoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <string.h>

void	*ft_memalloc(size_t size)
{
	void *aloc;

	if (!(aloc = (char*)malloc(size)))
		return (NULL);
	ft_bzero(aloc, size);
	return (aloc);
}
