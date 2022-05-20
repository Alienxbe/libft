/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strendwith.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mykman <mykman@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/20 06:29:00 by mykman            #+#    #+#             */
/*   Updated: 2022/05/20 06:36:58 by mykman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strendwith(const char *str, const char *suffix)
{
	size_t	lensuffix;

	if (!str || !suffix)
		return (0);
	lensuffix = ft_strlen(suffix);
	return (!ft_strncmp(str + ft_strlen(str) - lensuffix, suffix, lensuffix));
}
