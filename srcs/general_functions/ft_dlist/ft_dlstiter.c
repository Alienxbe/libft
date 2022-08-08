/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dlstiter.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mykman <mykman@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/24 20:26:06 by mykman            #+#    #+#             */
/*   Updated: 2022/08/08 23:47:25 by mykman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_dlist.h"

t_bool	ft_dlstiter(t_dlist *lst, void (*f)(void *))
{
	if (!lst || !f)
		return (false);
	while (lst)
	{
		f(lst->content);
		lst = lst->next;
	}
	return (true);
}
