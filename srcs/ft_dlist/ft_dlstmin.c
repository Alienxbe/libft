/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dlstmin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mykman <mykman@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 14:34:40 by mykman            #+#    #+#             */
/*   Updated: 2022/08/06 22:48:38 by mykman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include "ft_dlist.h"

t_dlist	*ft_dlstmin(t_dlist	*lst)
{
	t_dlist	*min;

	if (!lst)
		return (NULL);
	min = lst;
	while (lst)
	{
		if (*(int *)lst->content < *(int *)min->content)
			min = lst;
		lst = lst->next;
	}
	return (min);
}
