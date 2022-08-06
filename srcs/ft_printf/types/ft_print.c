/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mykman <mykman@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/28 20:16:42 by maykman           #+#    #+#             */
/*   Updated: 2022/08/06 22:23:29 by mykman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "__ft_printf__.h"

int	ft_print(char *str, t_tag tag)
{
	int		len;
	char	spacer;

	if (!str)
		return (0);
	spacer = ' ';
	if (tag.flags & FLAG_ZERO)
		spacer = '0';
	len = 0;
	if (!(tag.flags & FLAG_MINUS))
		len += ft_putnchar(spacer, tag.width - ft_strlen(str), tag.fd);
	len += ft_puts(str, tag.fd);
	if (!*str && tag.type == (t_type)CHAR)
		len += write(tag.fd, "\0", 1);
	if (tag.flags & FLAG_MINUS)
		len += ft_putnchar(spacer, tag.width - ft_strlen(str), tag.fd);
	free(str);
	return (len);
}
