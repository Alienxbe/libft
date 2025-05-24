/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marykman <marykman@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/29 10:01:41 by anonymou          #+#    #+#             */
/*   Updated: 2025/05/16 01:17:09 by marykman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_LIST_H
# define FT_LIST_H

# include "ft_bool.h"

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}		t_list;

t_list	*ft_lstnew(void *content);
t_list	*ft_lstremove(t_list **alst, t_list *element);
t_list	*ft_lstlast(t_list *lst);
t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));
char	*ft_lststrjoin(t_list *lst, char *sep);

int		ft_lstsize(t_list *lst);

t_bool	ft_lstadd_front(t_list **alst, t_list *new);
t_bool	ft_lstadd_back(t_list **alst, t_list *new);
t_bool	ft_lstiter(t_list *lst, void (*f)(void *));
void	ft_lstdelone(t_list *lst, void (*del)(void *));
void	ft_lstclear(t_list **lst, void (*del)(void *));

#endif
