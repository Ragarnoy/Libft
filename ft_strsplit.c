/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlernoul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/01 18:55:45 by tlernoul          #+#    #+#             */
/*   Updated: 2017/11/16 17:20:19 by tlernoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_countword(const char *s, char c)
{
	size_t w;
	size_t i;

	w = 0;
	i = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i] && s[i] != c)
		{
			w++;
			while (s[i] && s[i] != c)
				i++;
		}
	}
	return (w);
}

static char		*ft_retword(const char *s, char c, size_t start)
{
	size_t len;
	size_t pos;

	pos = start;
	len = 0;
	while (s[pos] && s[pos] != c)
	{
		len++;
		pos++;
	}
	return (ft_strsub(s, start, len));
}

char			**ft_strsplit(const char *s, char c)
{
	size_t	i;
	size_t	word;
	char	**ret;

	i = 0;
	if (!(s))
		return (0);
	word = ft_countword(s, c);
	if (!(ret = (char**)malloc(sizeof(*ret) * (word + 1))))
		return (NULL);
	ret[word] = 0;
	word = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i] && s[i] != c)
		{
			ret[word] = ft_retword(s, c, i);
			word++;
			while (s[i] && s[i] != c)
				i++;
		}
	}
	return (ret);
}
