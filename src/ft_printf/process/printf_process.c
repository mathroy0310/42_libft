/* ************************************************************************** */
/*                                                                            */
/*                                                     ██   ██ ██████         */
/*   printf_process.c                                  ██   ██      ██        */
/*                                                     ███████  █████         */
/*   By: maroy <maroy@student.42.qc>                        ██ ██             */
/*                                                          ██ ███████.qc     */
/*   Created: 2021/01/11 13:37:38 by lduplain                                 */
/*   Updated: 2023/10/26 20:10:24 by maroy            >(.)__ <(.)__ =(.)__    */
/*                                                     (___/  (___/  (___/    */
/* ************************************************************************** */

#include "libft.h"

size_t	process(t_printable *prtbl, va_list args)
{
	char	*to_print;
	size_t	char_count;

	to_print = NULL;
	char_count = 0;
	if (prtbl->type == 'c')
		char_count += c_processor(prtbl, args, &to_print);
	else if (prtbl->type == 's')
		s_processor(prtbl, args, &to_print);
	else if (prtbl->type == 'p')
		p_processor(prtbl, args, &to_print);
	else if (prtbl->type == 'd' || prtbl->type == 'i' || prtbl->type == 'u'
		|| prtbl->type == 'x' || prtbl->type == 'X')
		diuxx_processor(prtbl, args, &to_print);
	else if (prtbl->type == '%')
		pcrt_processor(prtbl, args, &to_print);
	if (to_print != NULL)
		char_count += display(prtbl, &to_print);
	if (to_print != NULL)
		free(to_print);
	return (char_count);
}
