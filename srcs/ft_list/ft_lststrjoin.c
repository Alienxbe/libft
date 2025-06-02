/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lststrjoin.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marykman <marykman@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/14 17:24:28 by marykman          #+#    #+#             */
/*   Updated: 2025/06/02 18:45:24 by marykman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include "ft_memory.h"
#include "ft_string.h"
#include "ft_list.h"

static size_t	get_size(t_list	*lst)
{
	size_t	size;

	size = 0;
	while (lst)
	{
		size += ft_strlen((char *)lst->content);
		lst = lst->next;
	}
	return (size);
}

static char	*copy_strs(t_list *lst, char *sep, char *str, size_t size)
{
	while (lst)
	{
		ft_strlcat(str, lst->content, size + 1);
		if (lst->next)
			ft_strlcat(str, sep, size);
		lst = lst->next;
	}
	return (str);
}

char	*ft_lststrjoin(t_list *lst, char *sep)
{
	char	*str;
	size_t	size;

	if (!lst || !sep)
		return (NULL);
	size = get_size(lst) + ft_lstsize(lst) * ft_strlen(sep) + 1;
	str = ft_calloc(sizeof(*str), size);
	if (!str)
		return (NULL);
	return (copy_strs(lst, sep, str, size));
}
