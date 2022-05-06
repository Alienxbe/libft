/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stdio.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maykman <maykman@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/29 10:10:31 by anonymou          #+#    #+#             */
/*   Updated: 2022/05/06 23:19:35 by maykman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_STDIO_H
# define FT_STDIO_H

void	ft_putchar_fd(const char c, int fd);
void	ft_putstr_fd(const char *s, int fd);
void	ft_putstr_non_printable_fd(const char *s, int fd);
void	ft_putendl_fd(const char *s, int fd);
void	ft_putnbr_fd(int n, int fd);
void	ft_putnbr_base_fd(int n, char *base, int fd);
void	ft_padding(const char c, int n);
void	*ft_print_memory_fd(void *addr, unsigned int size, int fd);
int		ft_putnchar(char c, int n, int fd);
int		ft_puts(const char *s, int fd);

#endif
