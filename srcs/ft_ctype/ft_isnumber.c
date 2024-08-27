/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isnumber.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marykman <marykman@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 09:46:45 by mykman            #+#    #+#             */
/*   Updated: 2024/08/26 18:46:17 by marykman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ctype.h"

t_bool	ft_isnumber(char *str)
{
	if (!str || !*str)
		return (false);
	while (*str)
		if (!ft_isdigit(*str++))
			return (false);
	return (true);
}
