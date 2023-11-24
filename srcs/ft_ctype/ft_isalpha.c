/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marykman <marykman@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/17 15:50:48 by mykman            #+#    #+#             */
/*   Updated: 2023/11/24 15:15:21 by marykman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_bool.h"
#include "ft_ctype.h"

t_bool	ft_isalpha(int c)
{
	return (ft_isupper(c) || ft_islower(c));
}
