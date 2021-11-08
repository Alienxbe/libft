/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dlstmin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mykman <mykman@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 14:34:40 by mykman            #+#    #+#             */
/*   Updated: 2021/11/08 14:47:31 by mykman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_dlist	*ft_dlstmin(t_dlist	*lst)
{
	t_dlist	*min;

	min = lst;
	while (lst)
	{
		if (*(int *)lst->content < *(int *)min->content)
			min = lst;
		lst = lst->next;
	}
	return (min);
}