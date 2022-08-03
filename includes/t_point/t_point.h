/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   t_point.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mykman <mykman@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/03 17:38:56 by mykman            #+#    #+#             */
/*   Updated: 2022/08/03 17:42:47 by mykman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef T_POINT_H
# define T_POINT_H

# include "libft.h"

typedef struct s_point
{
	int	x;
	int	y;
}	t_point;

t_point	new_point(int x, int y);
t_point	cmp_point(t_point p1, t_point p2);
void	print_point(t_point p);

#endif