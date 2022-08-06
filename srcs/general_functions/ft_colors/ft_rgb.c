/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rgb.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mykman <mykman@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 15:16:40 by mykman            #+#    #+#             */
/*   Updated: 2022/08/06 22:43:10 by mykman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_string.h"

char	*ft_rgb(unsigned char r, unsigned char g, unsigned char b)
{
	char	*str;
	char	*sr;
	char	*sg;
	char	*sb;

	sr = ft_itoa(r);
	sg = ft_itoa(g);
	sb = ft_itoa(b);
	str = NULL;
	if (sr && sg && sb)
		str = ft_strjoinx(7, "\e[38;2;", sr, ";", sg, ";", sb, "m");
	free(sr);
	free(sg);
	free(sb);
	return (str);
}
