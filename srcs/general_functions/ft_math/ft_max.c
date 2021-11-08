/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_max.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mykman <mykman@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 13:51:11 by mykman            #+#    #+#             */
/*   Updated: 2021/11/08 14:08:33 by mykman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	*ft_max(int *tab, int length)
{
	int	*max;

	max = tab;
	while (length--)
		if (tab[length] > *max)
			max = tab + length;
	return (max);
}
