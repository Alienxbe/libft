/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable_fd.c                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maykman <maykman@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 00:44:50 by mykman            #+#    #+#             */
/*   Updated: 2022/04/17 22:27:22 by maykman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_non_printable_fd(const char *s, int fd)
{
	if (!s)
		return (NULL);
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
