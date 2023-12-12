/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtol_l.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marykman <marykman@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 14:34:56 by marykman          #+#    #+#             */
/*   Updated: 2023/12/12 14:36:44 by marykman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_bool.h"
#include "ft_ctype.h"
#include "ft_string.h"

static long	set_endptr(const char *str, char **endptr, long n)
{
	if (endptr)
		*endptr = (char *)str;
	return (n);
}

int	check_base(const char *base)
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

/**
 * @brief Function that mimic the strtol function from libc.
 *  Small difference in the base argument wich takes the base string directly
 * instead of the base value.
 * @param str String to be converted
 * @param endptr Stores the address of the first invalid character
 * @param base Used to convert the number
 * @param max_len Maximum length checked for the number only
 * @return The converted number as a long
 */
long	ft_strtol_l(const char *str, char **endptr, const char *base,
	size_t max_len)
{
	unsigned long	n;
	char			sign;
	int				base_len;

	base_len = check_base(base);
	if (base_len <= 1)
		return (set_endptr(str, endptr, 0));
	while (ft_isspace(*str))
		str++;
	sign = 1;
	if (*str == '+' || *str == '-')
		if (*str++ == '-')
			sign = -1;
	n = 0;
	while (ft_index(base, *str) >= 0 && max_len--)
		n = n * base_len + ft_index(base, *str++);
	return (set_endptr(str, endptr, n * sign));
}
