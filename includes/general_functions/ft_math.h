/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_math.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mykman <mykman@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/29 10:06:58 by anonymou          #+#    #+#             */
/*   Updated: 2022/06/08 13:39:44 by mykman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_MATH_H
# define FT_MATH_H

# define BASE_BINARY		"01"
# define BASE_DECI			"0123456789"
# define BASE_OCTAL			"01234567"
# define BASE_HEXA_L		"0123456789abcdef"
# define BASE_HEXA_U		"0123456789ABCDEF"

int		ft_pow(int n, int pow);

int		*ft_max(int *tab, int length);
int		*ft_min(int *tab, int length);

int		ft_cmp_bn(const char *n1, const char *n2);

int		ft_rand(int max);
int		ft_randint(int min, int max);
void	ft_randinit(void);

#endif
