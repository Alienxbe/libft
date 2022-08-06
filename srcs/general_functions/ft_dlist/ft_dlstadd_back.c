/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dlstadd_back.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mykman <mykman@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 21:55:12 by mykman            #+#    #+#             */
/*   Updated: 2022/08/06 22:46:38 by mykman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include "ft_dlist.h"

void	ft_dlstadd_back(t_dlist **alst, t_dlist *new)
{
	if (!alst)
		return ;
	if (*alst)
		ft_dlstadd(new, ft_dlstlast(*alst), NULL);
	else
		*alst = new;
}
