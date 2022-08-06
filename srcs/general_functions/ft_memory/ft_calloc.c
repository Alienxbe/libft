/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mykman <mykman@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/20 09:11:37 by mykman            #+#    #+#             */
/*   Updated: 2022/08/06 23:02:13 by mykman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_memory.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*ptr;
	size_t	tot;

	tot = nmemb * size;
	if (nmemb != 0 && (tot / nmemb != size || tot % nmemb != 0))
		return (NULL);
	ptr = malloc(tot);
	if (ptr)
		ft_bzero(ptr, tot);
	return (ptr);
}
