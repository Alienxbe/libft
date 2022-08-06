/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dlstremove_front.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mykman <mykman@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 16:32:22 by mykman            #+#    #+#             */
/*   Updated: 2022/08/06 22:49:56 by mykman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include "ft_dlist.h"

t_dlist	*ft_dlstremove_front(t_dlist **lst)
{
	t_dlist	*first;

	if (!lst || !*lst)
		return (NULL);
	first = *lst;
	*lst = (*lst)->next;
	return (ft_dlstremove(first));
}
