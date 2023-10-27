/* ************************************************************************** */
/*                                                                            */
/*                                                     ██   ██ ██████         */
/*   printf_dot_parser.c                               ██   ██      ██        */
/*                                                     ███████  █████         */
/*   By: maroy <maroy@student.42.qc>                        ██ ██             */
/*                                                          ██ ███████.qc     */
/*   Created: 2020/12/15 12:47:26 by lduplain                                 */
/*   Updated: 2023/10/26 20:24:17 by maroy            >(.)__ <(.)__ =(.)__    */
/*                                                     (___/  (___/  (___/    */
/* ************************************************************************** */

#include "libft.h"

int	dot_parser(const char *format, int index, va_list args, t_printable *prtbl)
{
	prtbl->dot = TRUE;
	index++;
	if (ft_isdigit(format[index]))
	{
		prtbl->dot_value = 0;
		while (ft_isdigit(format[index]))
			prtbl->dot_value = prtbl->dot_value * 10 + format[index++] - '0';
	}
	else if (format[index] == '*')
	{
		prtbl->dot_value = va_arg(args, int);
		index++;
	}
	else
		prtbl->dot_value = 0;
	return (index);
}
