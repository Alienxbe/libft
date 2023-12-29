/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sign.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marykman <marykman@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/29 23:00:44 by marykman          #+#    #+#             */
/*   Updated: 2023/12/29 23:02:12 by marykman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_signint(int a)
{
	if (a < 0)
		return (-1);
	if (a > 0)
		return (1);
	return (0);
}

float	ft_signfloat(float a)
{
	if (a < 0)
		return (-1);
	if (a > 0)
		return (1);
	return (0);
}
