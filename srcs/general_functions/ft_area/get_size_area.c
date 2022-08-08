/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_size_area.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mykman <mykman@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/09 01:26:47 by mykman            #+#    #+#             */
/*   Updated: 2022/08/09 01:37:16 by mykman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_area.h"

t_point	get_size_area(t_area area)
{
	return (sub_point(area.p2, area.p1));
}
