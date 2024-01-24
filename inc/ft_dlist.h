/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dlist.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maroy <maroy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 16:26:20 by maroy             #+#    #+#             */
/*   Updated: 2024/01/23 19:27:18 by maroy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_DLIST_H
# define FT_DLIST_H

typedef struct s_dlist
{
	void			*content;
	struct s_dlist	*next;
	struct s_dlist	*prev;
}					t_dlist;

t_dlist				*ft_dlstnew(void *content);
void				ft_dlstadd_back(t_dlist **alst, t_dlist *new);
void				ft_dlstadd_front(t_dlist **alst, t_dlist *new);
t_dlist				*ft_dlstlast(t_dlist *lst);
t_dlist				*ft_dlstfirst(t_dlist *lst);
void				ft_dlstclear(t_dlist **lst, void (*del)(void *));
void				ft_dlstdelone(t_dlist *lst, void (*del)(void *));
void				ft_dlstpop_front(t_dlist **head, void (*del)(void *));
void				ft_dlstpop_back(t_dlist **head, void (*del)(void *));
void				ft_dlstclearback_addr(t_dlist **lst, void (*del)(void **));

#endif //DLIST_H