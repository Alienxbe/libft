/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcount.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mykman <mykman@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/10 09:31:30 by mykman            #+#    #+#             */
/*   Updated: 2022/06/10 09:32:03 by mykman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcount(const char *s, char c)
{
	int	count;

	count = 0;
	while (*s)
		if (*s++ == c)
			count++;
	return (count);
}
