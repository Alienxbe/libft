/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_min.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mykman <mykman@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 13:47:56 by mykman            #+#    #+#             */
/*   Updated: 2021/12/12 14:44:02 by mykman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	*ft_min(int *tab, int length)
{
	int	*min;

	min = tab;
	while (length--)
		if (tab[length] < *min)
			min = tab + length;
	return (min);
}
