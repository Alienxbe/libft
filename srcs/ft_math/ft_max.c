/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_max.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marykman <marykman@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/29 22:44:42 by marykman          #+#    #+#             */
/*   Updated: 2023/12/29 22:46:14 by marykman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_maxint(int a, int b)
{
	if (a > b)
		return (a);
	return (b);
}

float	ft_maxfloat(float a, float b)
{
	if (a > b)
		return (a);
	return (b);
}
