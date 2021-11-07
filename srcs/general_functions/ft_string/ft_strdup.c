/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mykman <mykman@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/20 09:19:53 by mykman            #+#    #+#             */
/*   Updated: 2021/11/07 22:45:56 by mykman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	size_t	size;
	char	*ptr;

	if (!s)
		return (NULL);
	size = (size_t)(ft_strlen(s) + 1);
	ptr = malloc(sizeof(*ptr) * size);
	if (!ptr)
		return (NULL);
	return (ft_memcpy(ptr, s, size));
}
