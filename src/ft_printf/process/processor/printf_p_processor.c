/* ************************************************************************** */
/*                                                                            */
/*                                                     ██   ██ ██████         */
/*   printf_p_processor.c                              ██   ██      ██        */
/*                                                     ███████  █████         */
/*   By: maroy <maroy@student.42.qc>                        ██ ██             */
/*                                                          ██ ███████.qc     */
/*   Created: 2020/12/16 19:05:47 by lduplain                                 */
/*   Updated: 2023/10/26 20:16:14 by maroy            >(.)__ <(.)__ =(.)__    */
/*                                                     (___/  (___/  (___/    */
/* ************************************************************************** */

#include "libft.h"

void	p_processor(t_printable *prtbl, va_list args, char **to_print)
{
	(void)prtbl;
	*to_print = ft_ulltoa_ibase(va_arg(args, unsigned long long), 16, FALSE);
	*to_print = ft_append_strs("0x", *to_print, FALSE, TRUE);
}
