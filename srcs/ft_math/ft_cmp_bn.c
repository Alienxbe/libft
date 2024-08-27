/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cmp_bn.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marykman <marykman@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/24 18:53:58 by maykman           #+#    #+#             */
/*   Updated: 2024/08/26 19:29:46 by marykman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include "ft_ctype.h"
#include "ft_string.h"
#include <stdio.h>

static int	sign_cmp(const char **n1, const char **n2)
{
	int		n1_sign;
	int		n2_sign;

	n1_sign = 1;
	n2_sign = 1;
	if (*n1[0] == '-' || *n1[0] == '+')
	{
		if (*n1[0] == '-')
			n1_sign = -1;
		(*n1)++;
	}
	if (*n2[0] == '-' || *n2[0] == '+')
	{
		if (*n2[0] == '-')
			n2_sign = -1;
		(*n2)++;
	}
	if (n1_sign != n2_sign)
		return (-1);
	return (0);
}

int	ft_cmp_bn(const char *n1, const char *n2)
{
	size_t	n1_size;
	size_t	n2_size;
	size_t	i;

	if (sign_cmp(&n1, &n2) < 0)
		return (-1);
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
