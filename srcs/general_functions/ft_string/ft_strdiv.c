/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdiv.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mykman <mykman@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/26 18:55:48 by mykman            #+#    #+#             */
/*   Updated: 2021/09/26 18:56:02 by mykman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdiv(char *s, int start, int len)
{
	char	*p;

	p = ft_substr(s, start, len);
	if (!p)
		return (s);
	else if (s)
		free(s);
	return (p);
}
