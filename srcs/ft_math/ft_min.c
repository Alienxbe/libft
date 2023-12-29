/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_min.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marykman <marykman@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/29 22:46:25 by marykman          #+#    #+#             */
/*   Updated: 2023/12/29 22:46:53 by marykman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_minint(int a, int b)
{
	if (a < b)
		return (a);
	return (b);
}

float	ft_minfloat(float a, float b)
{
	if (a < b)
		return (a);
	return (b);
}
