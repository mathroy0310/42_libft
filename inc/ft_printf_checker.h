/* ************************************************************************** */
/*                                                                            */
/*                                                     ██   ██ ██████         */
/*   ft_printf_checker.h                               ██   ██      ██        */
/*                                                     ███████  █████         */
/*   By: maroy <maroy@student.42.qc>                        ██ ██             */
/*                                                          ██ ███████.qc     */
/*   Created: 2020/12/10 16:50:35 by lduplain                                 */
/*   Updated: 2023/10/26 20:15:49 by maroy            >(.)__ <(.)__ =(.)__    */
/*                                                     (___/  (___/  (___/    */
/* ************************************************************************** */

#ifndef LIBFT_PRINTF_CHECKER_H
# define LIBFT_PRINTF_CHECKER_H


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
