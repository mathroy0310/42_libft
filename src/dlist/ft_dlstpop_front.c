/* ************************************************************************** */
/*                                                                            */
/*                                                     ██   ██ ██████         */
/*   ft_dlstpop_front.c                                ██   ██      ██        */
/*                                                     ███████  █████         */
/*   By: maroy <maroy@student.42.qc>                        ██ ██             */
/*                                                          ██ ███████.qc     */
/*   Created: 2023/07/14 21:42:52 by maroy                                    */
/*   Updated: 2023/10/17 17:17:16 by maroy            >(.)__ <(.)__ =(.)__    */
/*                                                     (___/  (___/  (___/    */
/* ************************************************************************** */

#include "libft.h"

void	ft_dlstpop_front(t_dlist **head, void (*del)(void*))
{
	t_dlist	*new_head;

	if (!head || !del || !*head)
		return ;
	new_head = (*head)->next;
	ft_dlstdelone(*head, del);
	*head = NULL;
	*head = new_head;
}
