/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_min.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maykman <maykman@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 13:47:56 by mykman            #+#    #+#             */
/*   Updated: 2022/04/17 21:52:05 by maykman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	*ft_min(int *tab, int length)
{
	int	*min;

	if (!tab)
		return (NULL);
	min = tab;
	while (length--)
		if (tab[length] < *min)
			min = tab + length;
	return (min);
}
