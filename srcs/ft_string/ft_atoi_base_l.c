/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base_l.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marykman <marykman@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 23:53:17 by marykman          #+#    #+#             */
/*   Updated: 2023/11/29 23:57:25 by marykman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ctype.h"
#include "ft_string.h"

static int	check_base(char *base)
{
	int	base_len;

	if (!base)
		return (0);
	base_len = -1;
	while (base[++base_len])
		if (base[base_len] == '+' || base[base_len] == '-'
			|| ft_isspace(base[base_len])
			|| ft_index(base + base_len + 1, base[base_len]) >= 0)
			return (0);
	return (base_len);
}

int	ft_atoi_base_l(char *str, char *base, size_t max_len)
{
	int	n;
	int	sign;
	int	base_len;

	base_len = check_base(base);
	if (base_len <= 1)
		return (0);
	while (ft_isspace(*str))
		str++;
	sign = 1;
	while (*str == '+' || *str == '-')
		if (*str++ == '-')
			sign = -sign;
	n = 0;
	while (ft_index(base, *str) >= 0 && max_len--)
		n = n * base_len + ft_index(base, *str++);
	return (n * sign);
}
