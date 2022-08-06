/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_addprefix.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mykman <mykman@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/06 23:01:34 by maykman           #+#    #+#             */
/*   Updated: 2022/08/06 23:17:48 by mykman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_string.h"

char	*ft_addprefix(char *s, const char *prefix)
{
	char	*new;

	if (!s || !prefix)
		return (s);
	new = ft_strjoin(prefix, s);
	free(s);
	return (new);
}
