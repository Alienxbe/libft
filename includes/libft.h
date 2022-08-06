/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mykman <mykman@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/10 15:46:33 by mykman            #+#    #+#             */
/*   Updated: 2022/08/05 23:58:00 by mykman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H

# define LIBFT_H

# include <stdlib.h>
# include <stdio.h>
# include <stdarg.h>
# include <unistd.h>
# include <limits.h>
# include <time.h>
# include <fcntl.h>
# include <sys/types.h>
# include <sys/uio.h>

/*
** General functions
*/

# include "ft_colors.h"
# include "ft_ctype.h"
# include "ft_list.h"
# include "ft_dlist.h"
# include "ft_math.h"
# include "ft_memory.h"
# include "ft_point.h"
# include "ft_stdio.h"
# include "ft_string.h"

/*
** ft_printf
*/

int	ft_printf(const char *format, ...);
int	ft_fprintf(int fd, const char *format, ...);

/*
** get_next_line
*/

int	get_next_line(int fd, char **line);

#endif
