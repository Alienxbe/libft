/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mykman <mykman@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/23 14:25:33 by mykman            #+#    #+#             */
/*   Updated: 2022/08/08 23:52:43 by mykman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_bool	ft_lstadd_back(t_list **alst, t_list *new)
{
	if (!alst)
		return (false);
	if (!*alst)
		*alst = new;
	else
		ft_lstlast(*alst)->next = new;
	return (true);
}
