/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rgb.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mykman <mykman@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 15:16:40 by mykman            #+#    #+#             */
/*   Updated: 2022/07/21 18:44:50 by mykman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
* Malloc a string in format : `/e[38;2; <r> ; <g> ; <b> m`
* wich is used by terminal to change the text color.
* Works better in I-term

* Parameters are coded on 8 bits
*/
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
