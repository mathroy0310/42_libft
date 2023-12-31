/* ************************************************************************** */
/*                                                                            */
/*                                                     ██   ██ ██████         */
/*   printf_star_parser.c                              ██   ██      ██        */
/*                                                     ███████  █████         */
/*   By: maroy <maroy@student.42.qc>                        ██ ██             */
/*                                                          ██ ███████.qc     */
/*   Created: 2020/12/15 11:26:36 by lduplain                                 */
/*   Updated: 2023/10/26 20:24:49 by maroy            >(.)__ <(.)__ =(.)__    */
/*                                                     (___/  (___/  (___/    */
/* ************************************************************************** */

#include "libft.h"

int	star_parser(const char *format, int index, va_list args, t_printable *prtbl)
{
	prtbl->star = TRUE;
	if (ft_isdigit(format[index]))
	{
		prtbl->star_value = 0;
		while (ft_isdigit(format[index]))
			prtbl->star_value = prtbl->star_value * 10 + format[index++] - '0';
	}
	else if (format[index] == '*')
	{
		prtbl->star_value = va_arg(args, int);
		index++;
	}
	if (prtbl->star_value < 0)
	{
		prtbl->minus = TRUE;
		prtbl->minus_value = -prtbl->star_value;
		prtbl->star = FALSE;
		prtbl->star_value = 0;
	}
	return (index);
}
