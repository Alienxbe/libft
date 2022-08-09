/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dlstremove_back.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mykman <mykman@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 16:23:57 by mykman            #+#    #+#             */
/*   Updated: 2022/08/06 22:49:44 by mykman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_dlist.h"

t_dlist	*ft_dlstremove_back(t_dlist **lst)
{
	return (ft_dlstremove(ft_dlstlast(*lst)));
}
