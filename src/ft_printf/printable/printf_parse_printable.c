/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf_parse_printable.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maroy <maroy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/11 13:49:12 by lduplain          #+#    #+#             */
/*   Updated: 2023/12/05 12:23:15 by maroy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	parse_printable(const char *format, size_t i, t_printable *prtbl,
		va_list args)
{
	while (format[i])
	{
		if (!is_valid_flag(format[i]) && !is_valid_type(format[i])
			&& !ft_isdigit(format[i]))
			break ;
		else if (format[i] == '.')
			i = dot_parser(format, i, args, prtbl);
		else if (format[i] == '-')
			i = minus_parser(format, i, args, prtbl);
		else if (format[i] == '0')
			i = zero_parser(format, i, args, prtbl);
		else if (format[i] == '*' || ft_isdigit(format[i]))
			i = star_parser(format, i, args, prtbl);
		else if (is_valid_type(format[i]))
		{
			prtbl->type = format[i];
			break ;
		}
		else
			i++;
	}
	return (i);
}
