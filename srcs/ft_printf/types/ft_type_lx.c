/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_type_lx.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mykman <mykman@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/29 00:28:12 by maykman           #+#    #+#             */
/*   Updated: 2022/08/06 22:23:21 by mykman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "__ft_printf__.h"

int	ft_type_lx(t_tag tag, va_list args)
{
	char			*s;
	const char		*prefix;
	unsigned int	n;

	n = va_arg(args, unsigned int);
	prefix = NULL;
	if (n && tag.flags & FLAG_HASHTAG)
		prefix = "0x";
	s = precision_condition(n, tag, BASE_HEXA_L);
	s = filling_zeroes(s, prefix, tag);
	s = ft_addprefix(s, prefix);
	return (ft_print(s, tag));
}
