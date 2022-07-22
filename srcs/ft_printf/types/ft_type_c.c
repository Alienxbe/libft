/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_type_c.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mykman <mykman@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/28 16:44:51 by maykman           #+#    #+#             */
/*   Updated: 2022/07/22 15:00:09 by mykman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_type_c(t_tag tag, va_list args)
{
	char	c;

	c = (char)va_arg(args, int);
	if (!c)
		tag.width--;
	return (ft_print(ft_ctoa(c), tag));
}
