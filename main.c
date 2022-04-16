/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maykman <maykman@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 21:21:24 by mykman            #+#    #+#             */
/*   Updated: 2022/04/16 19:38:46 by maykman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

int	main(void)
{
	t_list	*lst = NULL;
	int		nl[] = {0, 1, 2, 3};

	for (int i = 0; i < 4; i++)
		ft_lstadd_back(&lst, ft_lstnew(nl + i));
	ft_printf("size : %d\n", ft_lstsize(lst));
	ft_lstclear(&lst, NULL);
	return (0);
}
