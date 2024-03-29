/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_islower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marykman <marykman@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 15:13:18 by marykman          #+#    #+#             */
/*   Updated: 2023/11/24 16:14:49 by marykman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_bool.h"

t_bool	ft_islower(char c)
{
	return (c >= 'a' && c <= 'z');
}
