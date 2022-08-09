/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_point_in_area.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mykman <mykman@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/09 01:28:40 by mykman            #+#    #+#             */
/*   Updated: 2022/08/09 01:30:45 by mykman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_area.h"

t_bool	is_point_in_area(t_area area, t_point point)
{
	return (isbigger_point(point, area.p1) && issmaller_point(point, area.p2));
}
