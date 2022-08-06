/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstartwith.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mykman <mykman@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/20 06:25:26 by mykman            #+#    #+#             */
/*   Updated: 2022/08/06 23:28:47 by mykman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_string.h"

int	ft_strstartwith(const char *str, const char *prefix)
{
	return (!ft_strncmp(str, prefix, ft_strlen(prefix)));
}
