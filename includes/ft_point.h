/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_point.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mykman <mykman@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/03 17:38:56 by mykman            #+#    #+#             */
/*   Updated: 2022/08/09 00:24:18 by mykman           ###   ########.fr       */
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

t_point	new_point(int x, int y);
t_point	add_point(t_point p1, t_point p2);
t_point	sub_point(t_point p1, t_point p2);
t_bool	isbigger_point(t_point p1, t_point p2);
t_bool	issmaller_point(t_point p1, t_point p2);
t_bool	isequal_point(t_point p1, t_point p2);
void	print_point(t_point p);

#endif