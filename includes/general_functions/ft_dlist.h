/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dlist.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mykman <mykman@student.s19.be>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 19:39:46 by mykman            #+#    #+#             */
/*   Updated: 2021/10/12 19:39:46 by mykman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_DLIST_H
# define FT_DLIST_H

typedef struct s_dlist
{
	void			*content;
	struct s_dlist	*previous;
	struct s_dlist	*next;
}		t_dlist;

t_dlist	*ft_dlstnew(void *content);
t_dlist	*ft_dlstremove(t_dlist	*elem);
t_dlist	*ft_dlstlast(t_dlist *lst);
t_dlist	*ft_dlstmap(t_dlist *lst, void *(*f)(void *), void (*del)(void *));

int		ft_dlstsize(t_dlist *lst);
int		ft_dlstswap(t_dlist *elem1, t_dlist *elem2);

void	ft_dlstadd(t_dlist *new, t_dlist *previous, t_dlist *next);
void	ft_dlstadd_front(t_dlist **alst, t_dlist *new);
void	ft_dlstadd_back(t_dlist **alst, t_dlist *new);
void	ft_dlstiter(t_dlist *lst, void (*f)(void *));
void	ft_dlstdelone(t_dlist *lst, void (*del)(void *));
void	ft_dlstclear(t_dlist **lst, void (*del)(void *));

#endif