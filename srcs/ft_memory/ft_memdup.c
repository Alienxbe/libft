/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mykman <mykman@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/19 03:35:35 by mykman            #+#    #+#             */
/*   Updated: 2022/08/06 23:04:32 by mykman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_memory.h"

void	*ft_memdup(void *src, size_t size)
{
	void	*dst;

	if (!src)
		return (NULL);
	dst = malloc(size);
	if (dst)
		ft_memcpy(dst, src, size);
	return (dst);
}
