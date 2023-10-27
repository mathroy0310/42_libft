/* ************************************************************************** */
/*                                                                            */
/*                                                     ██   ██ ██████         */
/*   printf_create_printable.c                         ██   ██      ██        */
/*                                                     ███████  █████         */
/*   By: maroy <maroy@student.42.qc>                        ██ ██             */
/*                                                          ██ ███████.qc     */
/*   Created: 2021/01/11 13:53:30 by lduplain                                 */
/*   Updated: 2023/10/26 20:16:14 by maroy            >(.)__ <(.)__ =(.)__    */
/*                                                     (___/  (___/  (___/    */
/* ************************************************************************** */

#include "libft.h"

t_printable	create_printable(void)
{
	t_printable	printable;

	printable.type = 0;
	printable.minus = FALSE;
	printable.minus_value = 0;
	printable.star = FALSE;
	printable.star_value = 0;
	printable.dot = FALSE;
	printable.dot_value = 0;
	printable.zero = FALSE;
	printable.zero_value = 0;
	return (printable);
}
