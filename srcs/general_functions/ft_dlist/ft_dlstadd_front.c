/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dlstadd_front.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mykman <mykman@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 22:02:54 by mykman            #+#    #+#             */
/*   Updated: 2021/10/12 22:13:33 by mykman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_dlstadd_front(t_dlist **alst, t_dlist *new)
{
	if (!alst)
		return ;
	if (*alst)
		ft_dlstadd(new, NULL, *alst);
	*alst = new;
}
