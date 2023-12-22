/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fpoint_to_point.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marykman <marykman@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/22 15:04:49 by marykman          #+#    #+#             */
/*   Updated: 2023/12/22 15:05:35 by marykman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_point.h"

t_point	ft_fpoint_to_point(t_fpoint point)
{
	return ((t_point){point.x, point.y});
}
