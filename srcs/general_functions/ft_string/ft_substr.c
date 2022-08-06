/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mykman <mykman@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/20 09:45:37 by mykman            #+#    #+#             */
/*   Updated: 2022/08/06 23:30:25 by mykman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_memory.h"
#include "ft_string.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*cpy;

	if (!s)
		return (NULL);
	if (len > ft_strlen(s) - start + 1)
		len = ft_strlen(s) - start;
	else if (start > ft_strlen(s))
		return (ft_strdup(""));
	cpy = ft_calloc(len + 1, sizeof(char));
	if (!cpy)
		return (NULL);
	return (ft_memcpy(cpy, s + start, len));
}
