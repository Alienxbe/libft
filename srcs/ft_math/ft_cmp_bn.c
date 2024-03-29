/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cmp_bn.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mykman <mykman@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/24 18:53:58 by maykman           #+#    #+#             */
/*   Updated: 2022/08/06 23:01:13 by mykman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include "ft_ctype.h"
#include "ft_string.h"

int	ft_cmp_bn(const char *n1, const char *n2)
{
	size_t	n1_size;
	size_t	n2_size;
	size_t	i;

	n1_size = ft_strtypelen(n1, &ft_isdigit);
	n2_size = ft_strtypelen(n2, &ft_isdigit);
	if (n1_size != n2_size)
		return (n1_size - n2_size);
	i = -1;
	while (++i < n1_size)
		if (n1[i] != n2[i])
			return (n1[i] - n2[i]);
	return (0);
}
