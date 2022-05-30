/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_l.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maykman <maykman@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/26 23:44:46 by maykman           #+#    #+#             */
/*   Updated: 2022/05/26 23:44:55 by maykman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi_l(const char *str, int max_len)
{
	unsigned long long	n;
	char				sign;

	n = 0;
	sign = 1;
	if (!str)
		return (n);
	while ((*str >= 9 && *str <= 13) || *str == ' ')
		str++;
	if (*str == '+' || *str == '-')
		if (*str++ == '-')
			sign = -1;
	while (ft_isdigit(*str) && max_len--)
	{
		n = n * 10 + *str++ - '0';
		if (n > LLONG_MAX && sign > 0)
			return (-1);
		if (n > LLONG_MAX && sign < 0)
			return (0);
	}
	return (n * sign);
}
