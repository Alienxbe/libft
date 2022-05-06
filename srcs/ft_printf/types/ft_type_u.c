/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_type_u.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maykman <maykman@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/29 00:21:54 by maykman           #+#    #+#             */
/*   Updated: 2022/05/06 23:46:04 by maykman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_type_u(t_tag tag, va_list args)
{
	char			*s;
	
	s = precision_condition(va_arg(args, unsigned int), tag, BASE_DECI);
	s = filling_zeroes(s, NULL, tag);
	return (ft_print(s, tag));
}
