/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tab_int_min.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marykman <marykman@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 13:47:56 by mykman            #+#    #+#             */
/*   Updated: 2023/12/29 22:42:33 by marykman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

int	*ft_tab_int_min(int *tab, int length)
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
