/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maykman <maykman@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/18 16:03:07 by mykman            #+#    #+#             */
/*   Updated: 2022/05/06 01:01:28 by maykman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
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
	while (ft_isdigit(*str))
	{
		n = n * 10 + *str++ - '0';
		if (n > LLONG_MAX && sign > 0)
			return (-1);
		if (n > LLONG_MAX && sign < 0)
			return (0);
	}
	return (n * sign);
}
