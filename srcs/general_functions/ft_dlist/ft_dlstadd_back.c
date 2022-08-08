/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dlstadd_back.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mykman <mykman@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 21:55:12 by mykman            #+#    #+#             */
/*   Updated: 2022/08/08 23:43:55 by mykman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include "ft_dlist.h"

t_bool	ft_dlstadd_back(t_dlist **alst, t_dlist *new)
{
	if (!alst)
		return (false);
	if (*alst)
		ft_dlstadd(new, ft_dlstlast(*alst), NULL);
	else
		*alst = new;
	return (true);
}
