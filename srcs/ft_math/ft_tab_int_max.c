/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_max.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marykman <marykman@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 13:51:11 by mykman            #+#    #+#             */
/*   Updated: 2023/12/29 22:41:38 by marykman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

int	*ft_tab_int_max(int *tab, int length)
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
