/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_randint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mykman <mykman@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/08 13:25:17 by mykman            #+#    #+#             */
/*   Updated: 2022/08/06 23:00:09 by mykman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_math.h"

int	ft_randint(int min, int max)
{
	if (max <= min || max - min > RAND_MAX)
		return (min);
	return (ft_rand(max - min) + min);
}
