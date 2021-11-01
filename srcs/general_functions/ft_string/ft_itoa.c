/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mykman <mykman@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/22 13:26:55 by mykman            #+#    #+#             */
/*   Updated: 2021/09/27 17:21:09 by mykman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int n, int minsize, char pos_char)
{
	unsigned int	un;

	un = -n;
	if (n < 0)
		return (ft_utoa_base(un, minsize, BASE_DECI, '-'));
	return (ft_utoa_base(n, minsize, BASE_DECI, pos_char));
}
