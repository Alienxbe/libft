/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dlstremove_back.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marykman <marykman@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 16:23:57 by mykman            #+#    #+#             */
/*   Updated: 2023/11/10 16:17:43 by marykman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include "ft_dlist.h"

t_dlist	*ft_dlstremove_back(t_dlist **lst)
{
	t_dlist	*last;

	if (!lst || !*lst)
		return (NULL);
	last = ft_dlstlast(*lst);
	if (last == *lst)
		*lst = NULL;
	return (ft_dlstremove(last));
}
