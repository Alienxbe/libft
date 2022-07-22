/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mykman <mykman@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/14 00:34:22 by mykman            #+#    #+#             */
/*   Updated: 2022/07/22 15:13:54 by mykman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

static int	free_return(char **str, int ret_value)
{
	if (*str)
		free(*str);
	*str = NULL;
	return (ret_value);
}

static void	stock_next_line(char **saved, char **line, int bytes)
{
	int	eol;

	eol = ft_index(*saved, '\n');
	if (eol < 0)
		eol = ft_strlen(*saved);
	*line = ft_substr(*saved, 0, eol);
	if (bytes)
		*saved = ft_strdiv(*saved, eol + 1, ft_strlen(*saved) - eol);
}

char	*gnl_strjoin(char *s1, char *s2)
{
	int		size;
	char	*ptr;

	size = ft_strlen(s1) + ft_strlen(s2);
	ptr = (char *)malloc(sizeof(char) * (size + 1));
	if (!ptr)
		return (NULL);
	ft_memcpy(ptr, s1, ft_strlen(s1));
	ft_memcpy(ptr + ft_strlen(s1), s2, ft_strlen(s2));
	ptr[size] = 0;
	if (s1)
		free(s1);
	return (ptr);
}

/**
 * @brief Read the next line on a file descriptor
 *
 * @param fd
 * @param line: The address where the line is stored
 * @return int
 */
int	get_next_line(int fd, char **line)
{
	static char	*saved[FOPEN_MAX];
	char		*buff;
	int			bytes;

	buff = (char *)malloc(sizeof(char) * (BUFFER_SIZE + 1));
	if (read(fd, NULL, 0) < 0 || !line || !buff)
		return (free_return(&buff, FILE_NOT_FOUND_ERROR));
	bytes = 1;
	while (ft_index(saved[fd], '\n') < 0 && bytes != 0)
	{
		bytes = (int)read(fd, buff, BUFFER_SIZE);
		buff[bytes] = 0;
		saved[fd] = gnl_strjoin(saved[fd], buff);
		if (!saved[fd])
			return (free_return(&buff, -1));
	}
	free(buff);
	stock_next_line(&saved[fd], line, bytes);
	if (!*line || !saved[fd])
		return (free_return(line, -1));
	if (!bytes)
		return (free_return(&saved[fd], 0));
	return (1);
}
