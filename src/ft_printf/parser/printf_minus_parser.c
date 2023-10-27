/* ************************************************************************** */
/*                                                                            */
/*                                                     ██   ██ ██████         */
/*   printf_minus_parser.c                             ██   ██      ██        */
/*                                                     ███████  █████         */
/*   By: maroy <maroy@student.42.qc>                        ██ ██             */
/*                                                          ██ ███████.qc     */
/*   Created: 2020/12/15 12:29:45 by lduplain                                 */
/*   Updated: 2023/10/26 20:24:37 by maroy            >(.)__ <(.)__ =(.)__    */
/*                                                     (___/  (___/  (___/    */
/* ************************************************************************** */

#include "libft.h"

int	minus_parser(const char *format, size_t index, va_list args,
		t_printable *prtbl)
{
	prtbl->minus = TRUE;
	index++;
	while (format[index] == '0')
		index++;
	if (ft_isdigit(format[index]))
	{
		prtbl->minus_value = 0;
		while (ft_isdigit(format[index]))
			prtbl->minus_value = prtbl->minus_value * 10 + format[index++] - 48;
	}
	else if (format[index] == '*')
	{
		prtbl->minus_value = va_arg(args, int);
		index++;
	}
	else
		prtbl->minus_value = 0;
	prtbl->minus_value = ft_abs(prtbl->minus_value);
	return (index);
}
