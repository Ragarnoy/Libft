/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strappend.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlernoul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/26 19:50:16 by tlernoul          #+#    #+#             */
/*   Updated: 2017/09/26 20:13:40 by tlernoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strappend(char *app, char *end, char l)
{
	char *str;

	if (app && end)
		str = ft_strjoin(app, end);
	else if (app)
		str = ft_strdup(app);
	else if (end)
		str = ft_strdup(end);
	else
		return (NULL);
	if (l == 'f' || l == 'b')
		free(app);
	if (l == 's' || l == 'b')
		free(end);
	return (str);
}
