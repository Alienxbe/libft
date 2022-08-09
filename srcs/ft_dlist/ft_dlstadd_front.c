/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dlstadd_front.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mykman <mykman@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 22:02:54 by mykman            #+#    #+#             */
/*   Updated: 2022/08/08 23:44:27 by mykman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include "ft_dlist.h"

t_bool	ft_dlstadd_front(t_dlist **alst, t_dlist *new)
{
	if (!alst)
		return (false);
	if (*alst)
		ft_dlstadd(new, NULL, *alst);
	*alst = new;
	return (true);
}
