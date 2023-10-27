/* ************************************************************************** */
/*                                                                            */
/*                                                     ██   ██ ██████         */
/*   ft_string.h                                       ██   ██      ██        */
/*                                                     ███████  █████         */
/*   By: maroy <maroy@student.42.qc>                        ██ ██             */
/*                                                          ██ ███████.qc     */
/*   Created: 2023/10/26 20:26:45 by maroy                                    */
/*   Updated: 2023/10/26 20:27:28 by maroy            >(.)__ <(.)__ =(.)__    */
/*                                                     (___/  (___/  (___/    */
/* ************************************************************************** */

#ifndef FT_STRING_H
# define FT_STRING_H

# include "libft.h"

/*
**	Return appended string (char *)str with char c.
**	./strings/ft_append_char_to_str.c
**	Return NULL if calloc failed.
*/
char	*ft_append_char_to_str(char *str, char c);

/*
**	Append two strings (s1 and s2) in a new one.
**	Free s1 if free_s1 is TRUE.
**	Free s2 if free_s2 is TRUE.
**	Return value is null terminated.
**	./strings/ft_append_strs.c
**
**	Return:
**	(char *)result.
**	The string containing s1 and s2, null terminated.
*/
char	*ft_append_strs(char *s1, char *s2, t_bool free_s1, t_bool free_s2);
/*
**	Append string back of string to_mult n times.
**	(!WARNING) if to_mult is mallocated, ft_strmult_* don't free it.
**	./strings/ft_strmult_front.c
*/
char	*ft_strmult_front(	\
	char *to_mult,			\
	char *back,				\
	size_t n,				\
	t_bool free_back);

/*
**	Append string front of string to_mult n times.
**	(!WARNING) if to_mult is mallocated, ft_strmult_* don't free it.
**	./strings/ft_strmult_back.c
*/
char	*ft_strmult_back(	\
	char *to_mult,			\
	char *front,			\
	size_t n,				\
	t_bool free_front);


#endif