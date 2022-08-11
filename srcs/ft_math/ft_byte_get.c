/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_byte_get.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mykman <mykman@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/12 00:36:17 by mykman            #+#    #+#             */
/*   Updated: 2022/08/12 00:41:15 by mykman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_math.h"

int	ft_byte_get(int n, unsigned int pos, unsigned int nbyte)
{
	return ((n >> (0x8 * pos)) & ft_byte_repeat(0xFF, nbyte));
}
