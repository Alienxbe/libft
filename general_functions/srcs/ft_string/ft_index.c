/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_index.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mykman <mykman@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/27 19:56:40 by mykman            #+#    #+#             */
/*   Updated: 2021/06/27 19:57:09 by mykman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_index(const char *s, char c)
{
	int	i;

	if (s)
	{
		i = -1;
		while (s[++i])
			if (s[i] == c)
				return (i);
		if (s[i] == c)
			return (i);
	}
	return (-1);
}