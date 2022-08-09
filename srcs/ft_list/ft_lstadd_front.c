/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mykman <mykman@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/23 14:03:37 by mykman            #+#    #+#             */
/*   Updated: 2022/08/09 00:25:11 by mykman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_bool	ft_lstadd_front(t_list **alst, t_list *new)
{
	if (!alst || !new)
		return (false);
	new->next = *alst;
	*alst = new;
	return (true);
}
