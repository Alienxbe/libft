/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mykman <mykman@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/20 17:31:43 by mykman            #+#    #+#             */
/*   Updated: 2022/08/06 23:28:57 by mykman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_string.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	len;

	if (!s1 || !set)
		return (NULL);
	while (ft_strchr(set, *s1) && *s1)
		s1++;
	len = ft_strlen(s1) - 1;
	while (len + 1 && ft_strchr(set, s1[len]))
		len--;
	return (ft_substr(s1, 0, len + 1));
}
