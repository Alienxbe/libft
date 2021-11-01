/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dlstremove.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mykman <mykman@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/31 21:02:22 by mykman            #+#    #+#             */
/*   Updated: 2021/11/01 01:09:32 by mykman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_dlist	*ft_dlstremove(t_dlist	*elem)
{
	if (!elem)
		return (NULL);
	if (elem->previous)
		elem->previous->next = elem->next;
	if (elem->next)
		elem->next->previous = elem->previous;
	elem->next = NULL;
	elem->previous = NULL;
	return (elem);
}