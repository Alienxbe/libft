/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dlstmax.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mykman <mykman@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 14:29:47 by mykman            #+#    #+#             */
/*   Updated: 2021/12/12 14:43:39 by mykman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_dlist	*ft_dlstmax(t_dlist	*lst)
{
	t_dlist	*max;

	max = lst;
	while (lst)
	{
		if (*(int *)lst->content > *(int *)max->content)
			max = lst;
		lst = lst->next;
	}
	return (max);
}
