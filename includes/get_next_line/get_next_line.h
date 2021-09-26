/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mykman <mykman@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/26 12:01:55 by mykman            #+#    #+#             */
/*   Updated: 2021/09/26 12:01:55 by mykman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GNL_H
# define GNL_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE			2
# endif

# define FILE_NOT_FOUND_ERROR	-2

/*
** --- Main ---
*/

int		get_next_line(int fd, char **line);
char	*gnl_strjoin(char *s1, char *s2);

/*
** --- Utils ---
*/

int		free_return(char **str, int ret_value);
char	*gnl_substr(char *s, int start, int len, int s_free);

#endif
