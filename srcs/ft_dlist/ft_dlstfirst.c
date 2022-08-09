/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dlstfirst.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mykman <mykman@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 12:01:03 by mykman            #+#    #+#             */
/*   Updated: 2022/08/06 22:47:07 by mykman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include "ft_dlist.h"

t_dlist	*ft_dlstfirst(t_dlist *lst)
{
	if (!lst)
		return (NULL);
	while (lst->previous)
		lst = lst->previous;
	return (lst);
}
