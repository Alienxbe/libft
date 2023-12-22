/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_point.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marykman <marykman@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/03 17:38:56 by mykman            #+#    #+#             */
/*   Updated: 2023/12/22 15:07:38 by marykman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_POINT_H
# define FT_POINT_H

# include "ft_bool.h"

typedef struct s_point
{
	int	x;
	int	y;
}	t_point;

typedef struct s_fpoint
{
	float	x;
	float	y;
}	t_fpoint;

t_point	new_point(int x, int y);
t_point	add_point(t_point p1, t_point p2);
t_point	sub_point(t_point p1, t_point p2);
t_bool	isbigger_point(t_point p1, t_point p2);
t_bool	issmaller_point(t_point p1, t_point p2);
t_bool	isequal_point(t_point p1, t_point p2);
void	print_point(t_point p);

t_point	ft_fpoint_to_point(t_fpoint point);

#endif