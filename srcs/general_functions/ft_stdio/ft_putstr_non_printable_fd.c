/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable_fd.c                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mykman <mykman@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 00:44:50 by mykman            #+#    #+#             */
/*   Updated: 2022/08/06 23:21:54 by mykman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ctype.h"
#include "ft_math.h"
#include "ft_stdio.h"

void	ft_putstr_non_printable_fd(const char *s, int fd)
{
	if (!s)
		return ;
	while (*s)
	{
		if (!ft_isprint(*s))
		{
			ft_putchar_fd('\\', fd);
			ft_putnbr_base_fd(*s, BASE_HEXA_L, 1);
		}
		else
			ft_putchar_fd(*s, fd);
		s++;
	}
}
