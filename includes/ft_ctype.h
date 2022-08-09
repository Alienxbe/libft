/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ctype.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mykman <mykman@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/27 18:05:16 by mykman            #+#    #+#             */
/*   Updated: 2022/08/08 23:38:32 by mykman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_CTYPE_H
# define FT_CTYPE_H

# include "ft_bool.h"

t_bool	ft_isalnum(int c);
t_bool	ft_isalpha(int c);
t_bool	ft_isascii(int c);
t_bool	ft_isdigit(int c);
t_bool	ft_isprint(int c);
t_bool	ft_isspace(int c);

t_bool	ft_isnumber(char *str);

int		ft_toupper(int c);
int		ft_tolower(int c);
int		ft_todigit(int c);

#endif
