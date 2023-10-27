/* ************************************************************************** */
/*                                                                            */
/*                                                     ██   ██ ██████         */
/*   printf_pcrt_processor.c                           ██   ██      ██        */
/*                                                     ███████  █████         */
/*   By: maroy <maroy@student.42.qc>                        ██ ██             */
/*                                                          ██ ███████.qc     */
/*   Created: 2020/12/16 19:24:39 by lduplain                                 */
/*   Updated: 2023/10/26 20:16:07 by maroy            >(.)__ <(.)__ =(.)__    */
/*                                                     (___/  (___/  (___/    */
/* ************************************************************************** */

#include "libft.h"

void	pcrt_processor(	\
	t_printable *prtbl,	\
	va_list args,		\
	char **to_print)
{
	int		zeros;

	(void)args;
	*to_print = ft_strmult_front("%", *to_print, 1, TRUE);
	zeros = prtbl->zero_value - ft_strlen(*to_print);
	if (prtbl->zero && zeros > 0)
		*to_print = ft_strmult_front("0", *to_print, zeros, TRUE);
}
