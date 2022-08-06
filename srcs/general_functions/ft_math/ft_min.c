/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_min.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mykman <mykman@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 13:47:56 by mykman            #+#    #+#             */
/*   Updated: 2022/08/06 23:00:00 by mykman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

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
