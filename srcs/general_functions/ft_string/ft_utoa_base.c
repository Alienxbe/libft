/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utoa_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mykman <mykman@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/27 10:08:12 by mykman            #+#    #+#             */
/*   Updated: 2021/09/27 15:01:10 by mykman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_utoa_base(unsigned long n, int minsize, char *base, char sign_char)
{
	char	*str;
	int		size;
	int		len_base;

	len_base = ft_strlen(base);
	size = ft_usize_base(n, len_base, 0);
	if (!n)
		size = 1;
	size = *(int *)ft_ternary(minsize > size, &minsize, &size) + 1;
	if (sign_char)
		size++;
	str = (char *)ft_calloc(sizeof(char), size);
	if (!str)
		return (NULL);
	str = ft_memset(str, base[0], size - 1);
	while (--size)
	{
		str[size - 1] = base[n % len_base];
		n /= len_base;
	}
	if (sign_char)
		str[0] = sign_char;
	return (str);
}
