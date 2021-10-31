/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dlstadd_back.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mykman <mykman@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 21:55:12 by mykman            #+#    #+#             */
/*   Updated: 2021/10/24 20:04:12 by mykman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_dlstadd_back(t_dlist **alst, t_dlist *new)
{
	if (!alst)
		return ;
	if (*alst)
		ft_dlstadd(new, ft_dlstlast(*alst), NULL);
	else
		*alst = new;    
}