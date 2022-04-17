/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dlstsize.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maykman <maykman@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 14:53:09 by mykman            #+#    #+#             */
/*   Updated: 2022/04/17 21:48:55 by maykman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
