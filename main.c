/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mykman <mykman@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 21:21:24 by mykman            #+#    #+#             */
/*   Updated: 2021/10/24 20:34:50 by mykman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

static void	print_element(void *content)
{
	ft_printf("%s\n", (char *)content);
}

int main(void)
{
	/*t_dlist *a;
	t_dlist *b;
	t_dlist *c;
	t_dlist *d;*/

	t_dlist *list = NULL;

	ft_dlstadd_back(&list, ft_dlstnew("Bonjour"));
	ft_dlstadd_back(&list, ft_dlstnew("Tout"));
	ft_dlstadd_back(&list, ft_dlstnew("Va"));
	ft_dlstadd_back(&list, ft_dlstnew("Bien"));

	ft_dlstiter(list, &print_element);
	ft_dlstiter(list, &print_element);

	return (0);
}
