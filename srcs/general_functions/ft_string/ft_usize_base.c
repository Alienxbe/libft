/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_usize_base.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mykman <mykman@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/27 10:13:31 by mykman            #+#    #+#             */
/*   Updated: 2021/09/27 10:27:12 by mykman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_usize_base(unsigned long n, int len_base, int i)
{
	if (!n)
		return (i);
	return (ft_usize_base(n / len_base, len_base, i + 1));
}