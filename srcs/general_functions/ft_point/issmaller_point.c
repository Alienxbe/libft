/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   issmaller_point.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mykman <mykman@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/07 23:17:25 by mykman            #+#    #+#             */
/*   Updated: 2022/08/09 00:24:44 by mykman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_point.h"

t_bool	issmaller_point(t_point p1, t_point p2)
{
	return (p1.x < p2.x && p1.y < p2.y);
}