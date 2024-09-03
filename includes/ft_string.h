/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_string.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marykman <marykman@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/29 10:11:34 by anonymou          #+#    #+#             */
/*   Updated: 2024/09/03 18:46:24 by marykman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_STRING_H
# define FT_STRING_H

# include <stddef.h>
# include "ft_bool.h"

char	*ft_strchr(const char *s, int c);
char	*ft_strdiv(char *s, int start, int len);
char	*ft_strrchr(const char *s, int c);
char	*ft_strnstr(const char *haystack, const char *needle, size_t len);
char	*ft_substr(char const *s, unsigned int start, size_t len);
char	*ft_strjoin(char const *s1, char const *s2);
char	*ft_strjoinx(int n, ...);
char	*ft_addprefix(char *s, const char *prefix);
char	*ft_strtrim(char const *s1, char const *set);
char	*ft_itoa(int n);
char	*ft_ctoa(char c);
char	*ft_zutoa_base(size_t n, const char *base);
char	*ft_strmapi(const char *s, char (*f)(unsigned int, char));
char	*ft_strdup(const char *s);
char	*ft_strndup(const char *s, size_t n);
char	**ft_split(const char *s, char c);
size_t	ft_strlen(const char *s);
size_t	ft_strtypelen(const char *s, t_bool (*istype)(int));
size_t	ft_strlcpy(char *dst, const char *src, size_t dst_size);
size_t	ft_strlcat(char *dst, const char *src, size_t dstsize);
size_t	ft_intsize(long n);
int		ft_index(const char *s, char c);
int		ft_strncmp(const char *s1, const char *s2, size_t n);
int		ft_atoi(const char *str);
int		ft_atoi_l(const char *str, size_t max_len);
int		ft_atoi_base(char *str, char *base);
int		ft_atoi_base_l(char *str, char *base, size_t max_len);
long	ft_strtol(const char *str, char **endptr, const char *base);
long	ft_strtol_l(const char *str, char **endptr, const char *base,
			size_t max_len);
int		ft_strcount(const char *s, char c);
t_bool	ft_strstartwith(const char *str, const char *prefix);
t_bool	ft_strendwith(const char *str, const char *suffix);
void	ft_striteri(char *s, void (*f)(unsigned int, char *));

#endif
