/* ************************************************************************** */
/*                                                                            */
/*                                                     ██   ██ ██████         */
/*   ft_display_nbr_int.h                              ██   ██      ██        */
/*                                                     ███████  █████         */
/*   By: maroy <maroy@student.42.qc>                        ██ ██             */
/*                                                          ██ ███████.qc     */
/*   Created: 2020/12/14 16:18:41 by lduplain                                 */
/*   Updated: 2023/10/26 20:32:04 by maroy            >(.)__ <(.)__ =(.)__    */
/*                                                     (___/  (___/  (___/    */
/* ************************************************************************** */

#ifndef FT_DISPLAY_NBR_INT_H
# define FT_DISPLAY_NBR_INT_H

/*
**	START CUSTOM INCLUDES
*/

# include "libft.h"

/*
**	END CUSTOM INCLUDES
*/

/*
**	Print int on file descriptor fd.
**	./display/nbr/int/ft_puti_fd.c
*/
void	ft_puti_fd(int fd, int number);

/*
**	Print int on file descriptor fd followed by a new line.
**	./display/nbr/int/ft_puti_fdnl.c
*/
void	ft_puti_fdnl(int fd, int number);

/*
**	Print int on standard output.
**	./display/nbr/int/ft_puti.c
*/
void	ft_puti(int number);

/*
**	Print int on standard output followed by a new line.
**	./display/nbr/int/ft_puti_nl.c
*/
void	ft_puti_nl(int number);

/*
**	Print int on error output.
**	./display/nbr/int/ft_puti_err.c
*/
void	ft_puti_err(int number);

/*
**	Print int on error output followed by a new line.
**	./display/nbr/int/ft_puti_errnl.c
*/
void	ft_puti_errnl(int number);

#endif
