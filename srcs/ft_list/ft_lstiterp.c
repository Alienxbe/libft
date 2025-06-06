/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiterp.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marykman <marykman@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/03 14:26:16 by marykman          #+#    #+#             */
/*   Updated: 2025/06/03 14:28:38 by marykman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_bool	ft_lstiterp(t_list *lst, void (*f)(void *, void *), void *param)
{
	if (!f)
		return (false);
	while (lst)
	{
		f(lst->content, param);
		lst = lst->next;
	}
	return (true);
}
