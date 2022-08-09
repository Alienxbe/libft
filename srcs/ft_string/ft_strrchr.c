/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mykman <mykman@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/18 07:52:01 by mykman            #+#    #+#             */
/*   Updated: 2022/08/06 23:28:35 by mykman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_string.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*ptr;

	ptr = (char *)s + ft_strlen(s);
	if (s)
		while (ptr >= s)
			if (*ptr-- == (unsigned char)c)
				return (ptr + 1);
	return (NULL);
}
