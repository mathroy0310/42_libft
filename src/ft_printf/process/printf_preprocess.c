/* ************************************************************************** */
/*                                                                            */
/*                                                     ██   ██ ██████         */
/*   printf_preprocess.c                               ██   ██      ██        */
/*                                                     ███████  █████         */
/*   By: maroy <maroy@student.42.qc>                        ██ ██             */
/*                                                          ██ ███████.qc     */
/*   Created: 2021/01/11 13:45:28 by lduplain                                 */
/*   Updated: 2023/10/26 20:10:26 by maroy            >(.)__ <(.)__ =(.)__    */
/*                                                     (___/  (___/  (___/    */
/* ************************************************************************** */

#include "libft.h"

size_t	preprocess(const char *format, va_list args)
{
	t_printable	printable;
	size_t		char_count;
	size_t		index;

	char_count = 0;
	index = 0;
	while (format[index])
	{
		if (format[index] == '%' && format[index + 1])
		{
			printable = create_printable();
			index = parse_printable(format, index + 1, &printable, args);
			char_count += process(&printable, args);
		}
		else
			char_count += ft_putchar(format[index]);
		index++;
	}
	return (char_count);
}
