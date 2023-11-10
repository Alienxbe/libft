/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   __get_next_line__.h                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marykman <marykman@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/06 22:30:46 by mykman            #+#    #+#             */
/*   Updated: 2023/11/10 16:18:15 by marykman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __GET_NEXT_LINE___H
# define __GET_NEXT_LINE___H

# include <stdio.h>
# include <stdlib.h>
# include <sys/types.h>
# include <sys/uio.h>
# include <unistd.h>

# include "ft_memory.h"
# include "ft_string.h"

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE			1024
# endif

# define FILE_NOT_FOUND_ERROR	-2

#endif