/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sub_point.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marykman <marykman@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/05 23:44:59 by mykman            #+#    #+#             */
/*   Updated: 2025/10/21 13:36:23 by marykman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_point.h"

t_point	sub_point(t_point p1, t_point p2)
{
	return ((t_point){p1.x - p2.x, p1.y - p2.y});
}

t_fpoint	sub_fpoint(t_fpoint p1, t_fpoint p2)
{
	return ((t_fpoint){p1.x - p2.x, p1.y - p2.y});
}
