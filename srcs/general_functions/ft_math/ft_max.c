/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_max.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maykman <maykman@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 13:51:11 by mykman            #+#    #+#             */
/*   Updated: 2022/04/17 21:52:11 by maykman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	*ft_max(int *tab, int length)
{
	int	*max;

	if (!tab)
		return (NULL);
	max = tab;
	while (length--)
		if (tab[length] > *max)
			max = tab + length;
	return (max);
}
