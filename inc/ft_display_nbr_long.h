/* ************************************************************************** */
/*                                                                            */
/*                                                     ██   ██ ██████         */
/*   ft_display_nbr_long.h                             ██   ██      ██        */
/*                                                     ███████  █████         */
/*   By: maroy <maroy@student.42.qc>                        ██ ██             */
/*                                                          ██ ███████.qc     */
/*   Created: 2020/12/14 16:17:37 by lduplain                                 */
/*   Updated: 2023/10/26 20:32:08 by maroy            >(.)__ <(.)__ =(.)__    */
/*                                                     (___/  (___/  (___/    */
/* ************************************************************************** */

#ifndef FT_DISPLAY_NBR_LONG_H
# define FT_DISPLAY_NBR_LONG_H

/*
**	START CUSTOM INCLUDES
*/

# include "libft.h"

/*
**	END CUSTOM INCLUDES
*/

/*
**	Print long on file descriptor fd.
**	./display/nbr/longlong/ft_putl_fd.c
*/
void	ft_putl_fd(int fd, long number);

/*
**	Print long on file descriptor fd followed by a new line.
**	./display/nbr/longlong/ft_putl_fdnl.c
*/
void	ft_putl_fdnl(int fd, long number);

/*
**	Print long on standard output.
**	./display/nbr/longlong/ft_putl.c
*/
void	ft_putl(long number);

/*
**	Print long on standard output followed by a new line.
**	./display/nbr/longlong/ft_putl_nl.c
*/
void	ft_putl_nl(long number);

/*
**	Print long on error output.
**	./display/nbr/longlong/ft_putl_err.c
*/
void	ft_putl_err(long number);

/*
**	Print long on error output followed by a new line.
**	./display/nbr/longlong/ft_putl_errnl.c
*/
void	ft_putl_errnl(long number);

#endif
