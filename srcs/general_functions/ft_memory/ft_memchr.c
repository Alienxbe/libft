/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mykman <mykman@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/20 08:20:21 by mykman            #+#    #+#             */
/*   Updated: 2022/08/06 23:03:08 by mykman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	if (s)
		while (n--)
			if (*(unsigned char *)s++ == (unsigned char)c)
				return ((unsigned char *)s - 1);
	return (NULL);
}
