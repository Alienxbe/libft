/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mykman <mykman@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/16 22:12:20 by maykman           #+#    #+#             */
/*   Updated: 2022/08/06 22:26:48 by mykman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

/**
 * @brief Work the same as printf original function
 *
 * @param format: Main string wich can have conversion
 * @param ...: All conversion values
 * @return int: The number of character written to STDOUT
 */
int	ft_printf(const char *format, ...);

/**
 * @brief Work the same as fprintf original function
 * 
 * @param fd: The file descriptor where the function will print
 * @param format: Main string wich can have conversion
 * @param ...: All conversion values
 * @return int: The number of character written to the FD
 */
int	ft_fprintf(int fd, const char *format, ...);

#endif
