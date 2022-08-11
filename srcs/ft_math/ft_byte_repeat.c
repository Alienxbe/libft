/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_byte_repeat.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mykman <mykman@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/12 00:39:45 by mykman            #+#    #+#             */
/*   Updated: 2022/08/12 00:42:30 by mykman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_math.h"

int	ft_byte_repeat(t_byte byte, unsigned int count)
{
	if (!count)
		return (0);
	return ((byte << ((count - 1) * 0x8)) + ft_byte_repeat(byte, count - 1));
}
