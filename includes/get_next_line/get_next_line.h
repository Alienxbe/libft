/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mykman <mykman@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/26 12:01:55 by mykman            #+#    #+#             */
/*   Updated: 2022/08/06 22:33:07 by mykman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

/**
 * @brief Read the next line on a file descriptor
 *
 * @param fd
 * @param line: The address where the line is stored
 * @return int
 */
int	get_next_line(int fd, char **line);

#endif
