/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maykman <maykman@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/20 19:41:16 by mykman            #+#    #+#             */
/*   Updated: 2022/05/06 01:11:16 by maykman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_strclen(char const *s, char c)
{
	size_t	i;

	i = 0;
	while (s && s[i] && s[i] != c)
		i++;
	return (i);
}

static char	**ft_freeall(char **tab)
{
	int	i;

	i = -1;
	while (tab[++i])
		free(tab[i]);
	free(tab);
	return (NULL);
}

static size_t	ft_wordcount(char const *s, char c)
{
	size_t	wordcount;

	wordcount = 0;
	while (*s)
	{
		while (*s == c)
			s++;
		if (*s)
			wordcount++;
		while (*s && *s != c)
			s++;
	}
	return (wordcount);
}

char	**ft_split(char const *s, char c)
{
	char	**tab;
	size_t	wc;
	size_t	i;

	if (!s)
		return (NULL);
	wc = ft_wordcount(s, c);
	tab = ft_calloc(wc + 1, sizeof(*tab));
	if (!tab)
		return (NULL);
	i = -1;
	while (++i < wc)
	{
		while (*s == c)
			s++;
		tab[i] = ft_substr(s, 0, ft_strclen(s, c));
		if (!tab[i])
			return (ft_freeall(tab));
		while (*s && *s != c)
			s++;
	}
	return (tab);
}
