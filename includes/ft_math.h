/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_math.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marykman <marykman@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/29 10:06:58 by anonymou          #+#    #+#             */
/*   Updated: 2023/12/29 23:03:43 by marykman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_MATH_H
# define FT_MATH_H

# define BASE_BINARY		"01"
# define BASE_DECI			"0123456789"
# define BASE_OCTAL			"01234567"
# define BASE_HEXA_L		"0123456789abcdef"
# define BASE_HEXA_U		"0123456789ABCDEF"

typedef unsigned char	t_byte;

int		ft_pow(int n, int pow);
int		ft_maxint(int a, int b);
int		ft_minint(int a, int b);
int		ft_signint(int a);
float	ft_maxfloat(float a, float b);
float	ft_minfloat(float a, float b);
float	ft_signfloat(float a);
int		*ft_tab_int_max(int *tab, int length);
int		*ft_tab_int_min(int *tab, int length);
int		ft_cmp_bn(const char *n1, const char *n2);
/*
* Should be initalised with `ft_randinit`
* return a number between `0` and `max` (not included)
*/
int		ft_rand(int max);
/* Should be initalised with `ft_randinit()` */
int		ft_randint(int min, int max);
void	ft_randinit(void);

/*
** Bytes operations
*/

int		ft_byte_get(int n, unsigned int pos, unsigned int nbyte);
int		ft_byte_repeat(t_byte byte, unsigned int count);

#endif
