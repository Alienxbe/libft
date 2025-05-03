/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstremove.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marykman <marykman@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/03 18:53:52 by marykman          #+#    #+#             */
/*   Updated: 2025/05/03 19:10:41 by marykman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include "ft_list.h"

t_list	*ft_lstremove(t_list **alst, t_list *element)
{
	t_list	*lst;

	if (!alst || !*alst || !element)
		return (NULL);
	lst = *alst;
	if (lst == element)
		*alst = NULL;
	else
	{
		while (lst->next && lst->next != element)
			lst = lst->next;
		if (!lst)
			return (NULL);
		lst->next = element->next;
	}
	element->next = NULL;
	return (element);
}
