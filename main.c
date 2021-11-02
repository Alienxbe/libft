/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mykman <mykman@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 21:21:24 by mykman            #+#    #+#             */
/*   Updated: 2021/11/02 09:53:20 by mykman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

int main(void)
{
	char	*str = "0123 ";
	char	*n = "0123456789";

	ft_printf("ft_isnumber(%s): \"%d\"\n", str, ft_isnumber(str));
	ft_printf("ft_isnumber(%s): \"%d\"\n", n, ft_isnumber(n));
	return (0);
}
