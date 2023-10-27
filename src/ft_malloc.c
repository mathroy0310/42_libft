/* ************************************************************************** */
/*                                                                            */
/*                                                     ██   ██ ██████         */
/*   ft_malloc.c                                       ██   ██      ██        */
/*                                                     ███████  █████         */
/*   By: maroy <maroy@student.42.qc>                        ██ ██             */
/*                                                          ██ ███████.qc     */
/*   Created: 2023/08/01 15:30:41 by maroy                                    */
/*   Updated: 2023/10/26 20:42:23 by maroy            >(.)__ <(.)__ =(.)__    */
/*                                                     (___/  (___/  (___/    */
/* ************************************************************************** */

#include "libft.h"

void	*ft_malloc(size_t size)
{
	void	*ptr;

	ptr = malloc(size);
	if (!ptr)
	{
		ft_putstr_errnl("Error: malloc failed");
		exit(EXIT_FAILURE);
	}
	return (ptr);
}
