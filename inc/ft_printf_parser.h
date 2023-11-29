/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_parser.h                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maroy <maroy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/15 11:25:19 by lduplain          #+#    #+#             */
/*   Updated: 2023/11/28 22:41:06 by maroy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_PARSER_H
# define FT_PRINTF_PARSER_H

/*
**	START CUSTOM INCLUDES
*/

# include "libft.h"

/*
**	END CUSTOM INCLUDES
*/

/*
**	Parse dot flag.
**	./printf/parser/dot_parser.c
*/
int	dot_parser(const char *format, int index, va_list args,
		t_printable *printable);

/*
**	Parse star flag.
**	./printf/parser/star_parser.c
*/
int	star_parser(const char *format, int index, va_list args,
		t_printable *printable);

/*
**	Parse minus flag.
**	./printf/parser/minus_parser.c
*/
int	minus_parser(const char *format, size_t index, va_list args,
		t_printable *printable);

/*
**	Parse zero flag.
**	./printf/parser/zero_parser.c
*/
int	zero_parser(const char *format, size_t index, va_list args,
		t_printable *printable);

#endif
