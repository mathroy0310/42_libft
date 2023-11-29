/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_checker.h                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maroy <maroy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/10 16:50:35 by lduplain          #+#    #+#             */
/*   Updated: 2023/11/28 22:41:26 by maroy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_CHECKER_H
# define FT_PRINTF_CHECKER_H

# include "libft.h"

/*
**	Check if char c is a valid type usable by ft_printf.
**	./printf/checker/printf_is_valid_type.c
*/
t_bool	is_valid_type(char c);

/*
**	Check if char c is a valid flag usable by ft_printf.
**	./printf/checker/printf_is_valid_flag.c
*/
t_bool	is_valid_flag(char c);

#endif
