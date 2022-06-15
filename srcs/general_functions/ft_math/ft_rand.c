/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rand.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mykman <mykman@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/08 13:37:41 by mykman            #+#    #+#             */
/*   Updated: 2022/06/08 13:39:23 by mykman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
* Should be initalised with `ft_randinit`
* return a number between `0` and `max` (not included)
*/
int	ft_rand(int max)
{
	return (rand() % max);
}
