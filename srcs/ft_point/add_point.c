/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_point.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marykman <marykman@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/07 22:02:02 by mykman            #+#    #+#             */
/*   Updated: 2025/10/21 13:38:44 by marykman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_point.h"

t_point	add_point(t_point p1, t_point p2)
{
	return ((t_point){p1.x + p2.x, p1.y + p2.y});
}

t_fpoint	add_fpoint(t_fpoint p1, t_fpoint p2)
{
	return ((t_fpoint){p1.x + p2.x, p1.y + p2.y});
}
