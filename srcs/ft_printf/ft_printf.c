/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maykman <maykman@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/16 22:15:27 by maykman           #+#    #+#             */
/*   Updated: 2022/05/07 00:50:31 by maykman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_checkformat(int fd, const char *format)
{
	if (!format)
		return (1);
	while (*format)
	{
		if (*format == '%')
		{
			if (ft_set_tag(fd, &format).type == (t_type)NONE)
				return (1);
		}
		else
			format++;
	}
	return (0);
}

static int	ft_printf_main(int fd, const char *format, va_list args)
{
	const char	*ptr;
	int			len;

	if (ft_checkformat(fd, format))
		return (-1);
	len = 0;
	ptr = ft_strchr(format, '%');
	while (ptr)
	{
		len += write(fd, format, ptr - format);
		format = ptr;
		len += ft_conversion(fd, &format, args);
		ptr = ft_strchr(format, '%');
	}
	if (!ptr)
			len += ft_puts(format, fd);
	return (len);
}

/**
 * @brief Work the same as printf original function
 * 
 * @param fd: The file descriptor where the function will print
 * @param format: Main string wich can have conversion
 * @param ...: All conversion values
 * @return int: The number of character written to the FD
 */
int	ft_fprintf(int fd, const char *format, ...)
{
	va_list	args;
	int		len;

	va_start(args, format);
	len = ft_printf_main(fd, format, args);
	va_end(args);
	return (len);
}

/**
 * @brief Work the same as printf original function
 *
 * @param format: Main string wich can have conversion
 * @param ...: All conversion values
 * @return int: The number of character written to STDOUT
 */
int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		len;

	va_start(args, format);
	len = ft_printf_main(STDOUT_FILENO, format, args);
	va_end(args);
	return (len);
}
