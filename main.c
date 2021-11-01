/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mykman <mykman@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 21:21:24 by mykman            #+#    #+#             */
/*   Updated: 2021/11/01 16:49:31 by mykman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

static void	print_element(void *content)
{
	ft_printf("%s\n", (char *)content);
}

int main(void)
{
	t_dlist	*a = ft_dlstnew("A");
	t_dlist	*b = ft_dlstnew("B");
	t_dlist	*c = ft_dlstnew("C");
	t_dlist	*d = ft_dlstnew("D");
	t_dlist	*e = ft_dlstnew("E");
	t_dlist	*list = NULL;

	ft_dlstadd_back(&list, a);
	ft_dlstadd_back(&list, b);
	ft_dlstadd_back(&list, c);
	ft_dlstadd_back(&list, d);
	ft_dlstadd_back(&list, e);

	ft_dlstiter(list, &print_element);
	ft_printf("------------\n");
	//list = ft_dlstswap(b, a);
	free(ft_dlstremove_front(&list));
	free(ft_dlstremove_back(&list));
	ft_dlstiter(list, &print_element);

	return (0);
}
