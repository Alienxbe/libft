/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_area.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mykman <mykman@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/06 19:30:19 by mykman            #+#    #+#             */
/*   Updated: 2022/08/06 19:56:19 by mykman           ###   ########.fr       */
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

t_area	new_area(int x1, int y1, int x2, int y2);
t_area	point_to_area(t_point p1, t_point p2);

#endif
