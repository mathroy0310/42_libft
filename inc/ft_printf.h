/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maroy <maroy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/08 16:33:56 by lduplain          #+#    #+#             */
/*   Updated: 2023/11/28 22:40:38 by maroy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

/*
**	START CUSTOM INCLUDES
*/

# include "libft.h"
# include "ft_printf_printable.h"
# include "ft_printf_processor.h"
# include "ft_printf_checker.h"
# include "ft_printf_parser.h"

/*
**	END CUSTOM INCLUDES
*/

/*
**	Print messages like printf function. (contained in libc)
**	./printf/ft_printf.c
*/
int	ft_printf(const char *format, ...);

#endif
