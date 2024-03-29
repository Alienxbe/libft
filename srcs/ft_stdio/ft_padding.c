/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_padding.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mykman <mykman@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/27 20:00:02 by mykman            #+#    #+#             */
/*   Updated: 2022/08/06 23:14:34 by mykman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_padding(const char c, int n)
{
	while (n-- > 0)
		write(STDOUT_FILENO, &c, 1);
}
