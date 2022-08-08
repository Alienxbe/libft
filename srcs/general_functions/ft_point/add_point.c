/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_point.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mykman <mykman@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/07 22:02:02 by mykman            #+#    #+#             */
/*   Updated: 2022/08/07 22:03:20 by mykman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_point.h"

t_point	add_point(t_point p1, t_point p2)
{
	return ((t_point){p1.x + p2.x, p1.y + p2.y});
}