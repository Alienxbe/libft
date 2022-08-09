/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mykman <mykman@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/22 13:26:55 by mykman            #+#    #+#             */
/*   Updated: 2022/08/06 23:20:51 by mykman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_memory.h"
#include "ft_string.h"

char	*ft_itoa(int n)
{
	char			*s;
	size_t			nsize;
	unsigned int	un;

	nsize = ft_intsize(n);
	s = ft_calloc(nsize + 1, sizeof(*s));
	if (!s)
		return (NULL);
	s[0] = '0';
	un = n;
	if (n < 0)
	{
		un = -n;
		s[0] = '-';
	}
	while (un)
	{
		s[--nsize] = '0' + un % 10;
		un /= 10;
	}
	return (s);
}
