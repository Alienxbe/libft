/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_max.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mykman <mykman@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 13:51:11 by mykman            #+#    #+#             */
/*   Updated: 2022/08/06 22:59:54 by mykman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

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
