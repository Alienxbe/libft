/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   point_to_area.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mykman <mykman@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/06 19:55:03 by mykman            #+#    #+#             */
/*   Updated: 2022/08/06 23:51:08 by mykman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_area.h"

t_area	point_to_area(t_point p1, t_point p2)
{
	return ((t_area){p1, p2});
}
