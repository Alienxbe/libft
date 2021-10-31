/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dlstnew.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mykman <mykman@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/23 13:43:11 by mykman            #+#    #+#             */
/*   Updated: 2021/10/12 21:49:42 by mykman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_dlist	*ft_dlstnew(void *content)
{
	t_dlist	*ptr;

	ptr = (t_dlist *)malloc(sizeof(t_dlist));
	if (!ptr)
		return (NULL);
	ptr->content = content;
	ptr->previous = NULL;
	ptr->next = NULL;
	return (ptr);
}
