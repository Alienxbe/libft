/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dlstsize.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mykman <mykman@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 14:53:09 by mykman            #+#    #+#             */
/*   Updated: 2022/08/06 22:50:18 by mykman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_dlist.h"

int	ft_dlstsize(t_dlist *lst, t_dlist *toward)
{
	int	i;

	if (!lst)
		return (0);
	i = 0;
	if (lst->next == toward)
	{
		while (lst)
		{
			i++;
			lst = lst->next;
		}
	}
	else if (lst->previous == toward)
	{
		while (lst)
		{
			i++;
			lst = lst->previous;
		}
	}
	else
		i++;
	return (i);
}
