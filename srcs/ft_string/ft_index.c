/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_index.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mykman <mykman@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/27 19:56:40 by mykman            #+#    #+#             */
/*   Updated: 2022/08/06 23:19:31 by mykman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_string.h"

int	ft_index(const char *s, char c)
{
	char	*ptr;

	ptr = ft_strchr(s, c);
	if (!ptr || !*ptr)
		return (-1);
	return (ptr - s);
}
