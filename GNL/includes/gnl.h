/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   gnl.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mykman <mykman@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/12 17:59:20 by mykman            #+#    #+#             */
/*   Updated: 2021/09/24 18:25:52 by mykman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GNL_H
# define GNL_H

# include <sys/types.h>
# include <sys/uio.h>
# include <limits.h>
# include "libft.h"

/*
** --- Main ---
*/

int		get_next_line(int fd, char **line);
char	*gnl_strjoin(char *s1, char *s2);

/*
** --- Utils ---
*/

int		free_return(char **str, int ret_value);
char	*ft_substr(char *s, int start, int len, int s_free);

#endif
