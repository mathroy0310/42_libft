/* ************************************************************************** */
/*                                                                            */
/*                                                     ██   ██ ██████         */
/*   ft_display_nbr_ulonglong.h                        ██   ██      ██        */
/*                                                     ███████  █████         */
/*   By: maroy <maroy@student.42.qc>                        ██ ██             */
/*                                                          ██ ███████.qc     */
/*   Created: 2020/12/14 14:27:35 by lduplain                                 */
/*   Updated: 2023/10/26 20:32:22 by maroy            >(.)__ <(.)__ =(.)__    */
/*                                                     (___/  (___/  (___/    */
/* ************************************************************************** */

#ifndef FT_DISPLAY_NBR_ULONGLONG_H
# define FT_DISPLAY_NBR_ULONGLONG_H

/*
**	START CUSTOM INCLUDES
*/

# include "libft.h"

/*
**	END CUSTOM INCLUDES
*/

/*
**	Print unsigned long long on file descriptor fd.
**	./display/nbr/ull/ft_putull_fd.c
*/
void	ft_putull_fd(int fd, unsigned long long number);

/*
**	Print unsigned long long on file descriptor fd followed by a new line.
**	./display/nbr/ull/ft_putull_fdnl.c
*/
void	ft_putull_fdnl(int fd, unsigned long long number);

/*
**	Print unsigned long long on standard output.
**	./display/nbr/ull/ft_putull.c
*/
void	ft_putull(unsigned long long number);

/*
**	Print unsigned long long on standard output followed by a new line.
**	./display/nbr/ull/ft_putull_nl.c
*/
void	ft_putull_nl(unsigned long long number);

/*
**	Print unsigned long long on error output.
**	./display/nbr/ull/ft_putull_err.c
*/
void	ft_putull_err(unsigned long long number);

/*
**	Print unsigned long long on error output followed by a new line.
**	./display/nbr/ull/ft_putull_errnl.c
*/
void	ft_putull_errnl(unsigned long long number);

#endif
