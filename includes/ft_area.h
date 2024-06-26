/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_area.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marykman <marykman@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/06 19:30:19 by mykman            #+#    #+#             */
/*   Updated: 2024/04/03 00:29:50 by marykman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_AREA_H
# define FT_AREA_H

# include "ft_point.h"

typedef struct s_area
{
	t_point	p1;
	t_point	p2;
}	t_area;

t_area	pos_to_area(int x1, int y1, int x2, int y2);
t_area	point_to_area(t_point p1, t_point p2);
t_point	area_to_size(t_area area);
t_area	size_to_area(t_point size);
t_bool	is_point_in_area(t_area area, t_point point);
t_bool	area_collision(t_area a, t_area b);

#endif
