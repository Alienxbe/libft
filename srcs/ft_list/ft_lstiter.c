/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mykman <mykman@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/23 16:34:45 by mykman            #+#    #+#             */
/*   Updated: 2022/08/08 23:53:50 by mykman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_bool	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (!f)
		return (false);
	while (lst)
	{
		f(lst->content);
		lst = lst->next;
	}
	return (true);
}
