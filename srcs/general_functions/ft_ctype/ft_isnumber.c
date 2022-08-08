/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isnumber.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mykman <mykman@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 09:46:45 by mykman            #+#    #+#             */
/*   Updated: 2022/08/08 23:32:35 by mykman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ctype.h"

t_bool	ft_isnumber(char *str)
{
	if (!str)
		return (false);
	while (*str)
		if (!ft_isdigit(*str++))
			return (false);
	return (true);
}
