/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mykman <mykman@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/18 12:34:16 by mykman            #+#    #+#             */
/*   Updated: 2022/08/06 23:27:47 by mykman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_memory.h"
#include "ft_string.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	len;

	if (ft_strlen(s1) > ft_strlen(s2))
		len = ft_strlen(s2) + 1;
	else
		len = ft_strlen(s1) + 1;
	if (n < len)
		len = n;
	return (ft_memcmp(s1, s2, len));
}
