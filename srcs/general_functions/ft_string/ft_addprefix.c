/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_addprefix.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maykman <maykman@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/06 23:01:34 by maykman           #+#    #+#             */
/*   Updated: 2022/05/06 23:01:52 by maykman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_addprefix(char *s, const char *prefix)
{
	char	*new;

	if (!s || !prefix)
		return (s);
	new = ft_strjoin(prefix, s);
	free(s);
	return (new);
}
