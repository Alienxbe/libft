/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dlstremove_front.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mykman <mykman@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 16:32:22 by mykman            #+#    #+#             */
/*   Updated: 2021/11/01 16:48:45 by mykman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_dlist	*ft_dlstremove_front(t_dlist **lst)
{
	t_dlist	*first;

	if (!lst || !*lst)
		return (NULL);
	first = *lst;
	*lst = (*lst)->next;
	return (ft_dlstremove(first));
}