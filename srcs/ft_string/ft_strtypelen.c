/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtypelen.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mykman <mykman@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/24 18:25:36 by maykman           #+#    #+#             */
/*   Updated: 2022/08/09 00:25:41 by mykman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include "ft_ctype.h"

size_t	ft_strtypelen(const char *s, t_bool (*istype)(int))
{
	size_t	len;

	len = 0;
	if (s)
		while (istype(s[len]))
			len++;
	return (len);
}
