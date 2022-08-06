/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_colors.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mykman <mykman@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 14:24:06 by mykman            #+#    #+#             */
/*   Updated: 2022/08/06 22:36:50 by mykman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_COLORS_H
# define FT_COLORS_H

# define FT_BLACK		"\e[38;5;8m"
# define FT_RED			"\e[38;5;9m"
# define FT_GREEN		"\e[38;5;10m"
# define FT_YELLOW		"\e[38;5;11m"
# define FT_PURPLE		"\e[38;5;12m"
# define FT_PINK		"\e[38;5;13m"
# define FT_BLUE		"\e[38;5;14m"
# define FT_WHITE		"\e[38;5;15m"

# define FT_RESETCOL	"\e[0m"

/*
* Malloc a string in format : `/e[38;2; <r> ; <g> ; <b> m`
* wich is used by terminal to change the text color.
* Works better in I-term

* Parameters are coded on 8 bits
*/
char	*ft_rgb(unsigned char r, unsigned char g, unsigned char b);

#endif