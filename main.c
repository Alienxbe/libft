/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mykman <mykman@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 21:21:24 by mykman            #+#    #+#             */
/*   Updated: 2021/10/12 22:22:12 by mykman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

void	print_dlist(t_dlist	*lst)
{
	while (lst)
	{
		ft_printf("%d\n", *(int *)lst->content);
		lst = lst->next;
	}
}

int main(void)
{
	t_dlist *a;
	t_dlist *b;
	t_dlist *c;
	t_dlist *d;

	int		c1 = 1;
	int		c2 = 2;
	int		c3 = 3;
	int		c4 = 4;

	a = ft_dlstnew(&c1);
	b = ft_dlstnew(&c2);
	c = ft_dlstnew(&c3);
	d = ft_dlstnew(&c4);

	ft_dlstadd_back(&a, b);

	print_dlist(a);
	ft_printf("-------\n%p\n", ft_dlstlast(NULL));

	return (0);
}
