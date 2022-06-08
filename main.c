/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mykman <mykman@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 21:21:24 by mykman            #+#    #+#             */
/*   Updated: 2022/06/08 13:46:11 by mykman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

int	main(void)
{
	int	i;
	int	n;

	ft_randinit();
	i = 0;
	while ((n = ft_randint(0, INT_MAX)) != 50)
		ft_printf("%d:\t%d\n", i++, n);
	ft_printf("Trouvé ! (%d)\n", i);
	return (0);
}
