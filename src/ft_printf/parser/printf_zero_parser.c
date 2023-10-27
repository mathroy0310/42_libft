/* ************************************************************************** */
/*                                                                            */
/*                                                     ██   ██ ██████         */
/*   printf_zero_parser.c                              ██   ██      ██        */
/*                                                     ███████  █████         */
/*   By: maroy <maroy@student.42.qc>                        ██ ██             */
/*                                                          ██ ███████.qc     */
/*   Created: 2020/12/16 13:53:23 by lduplain                                 */
/*   Updated: 2023/10/26 20:24:53 by maroy            >(.)__ <(.)__ =(.)__    */
/*                                                     (___/  (___/  (___/    */
/* ************************************************************************** */

#include "libft.h"

int	zero_parser(const char *format, size_t index, va_list args,
                t_printable *prtbl) {
  prtbl->zero = TRUE;
  index++;
  if (ft_isdigit(format[index])) {
    prtbl->zero_value = 0;
    while (ft_isdigit(format[index]))
      prtbl->zero_value = prtbl->zero_value * 10 + format[index++] - '0';
  } else if (format[index] == '*') {
    prtbl->zero_value = va_arg(args, int);
    index++;
  } else
    prtbl->zero_value = 0;
  return (index);
}
