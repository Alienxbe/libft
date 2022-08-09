/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dlstnew.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mykman <mykman@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/23 13:43:11 by mykman            #+#    #+#             */
/*   Updated: 2022/08/06 22:49:33 by mykman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_dlist.h"

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
