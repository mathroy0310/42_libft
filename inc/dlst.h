/* ************************************************************************** */
/*                                                                            */
/*                                                     ██   ██ ██████         */
/*   dlst.h                                            ██   ██      ██        */
/*                                                     ███████  █████         */
/*   By: maroy <maroy@student.42.qc>                        ██ ██             */
/*                                                          ██ ███████.qc     */
/*   Created: 2023/10/05 11:47:36 by maroy                                    */
/*   Updated: 2023/10/05 13:37:20 by maroy            >(.)__ <(.)__ =(.)__    */
/*                                                     (___/  (___/  (___/    */
/* ************************************************************************** */

#ifndef DLST_H
# define DLST_H

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

#endif //DLST_H