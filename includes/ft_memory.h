/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memory.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mykman <mykman@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/29 10:08:16 by anonymou          #+#    #+#             */
/*   Updated: 2022/08/06 22:51:37 by mykman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_MEMORY_H
# define FT_MEMORY_H

# include <stddef.h>

void	*ft_memset(void *s, int c, size_t n);
void	*ft_memcpy(void	*dst, const void *src, size_t n);
void	*ft_memccpy(void *dest, const void *src, int c, size_t n);
void	*ft_memmove(void *dest, const void *src, size_t n);
void	*ft_memchr(const void *s, int c, size_t n);
void	*ft_calloc(size_t nmemb, size_t size);
void	*ft_memdup(void *src, size_t size);
void	*ft_ternary(int condition, void *a, void *b);
void	ft_bzero(void *s, size_t n);
int		ft_memcmp(const void *s1, const void *s2, size_t n);

#endif
