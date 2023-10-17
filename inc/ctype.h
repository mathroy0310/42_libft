/* ************************************************************************** */
/*                                                                            */
/*                                                     ██   ██ ██████         */
/*   ctype.h                                           ██   ██      ██        */
/*                                                     ███████  █████         */
/*   By: maroy <maroy@student.42.qc>                        ██ ██             */
/*                                                          ██ ███████.qc     */
/*   Created: 2023/10/17 17:00:26 by maroy                                    */
/*   Updated: 2023/10/17 17:16:57 by maroy            >(.)__ <(.)__ =(.)__    */
/*                                                     (___/  (___/  (___/    */
/* ************************************************************************** */

#ifndef CTYPE_H
# define CTYPE_H

int					ft_isalnum(int c);
int					ft_isalpha(int c);
int					ft_isascii(int c);
int					ft_iscntrl(int c);
int					ft_isdigit(int c);
int					ft_isgraph(int c);
int					ft_isprint(int c);
int					ft_tolower(int c);
int					ft_toupper(int c);
int					ft_ispunct(int c);
int					ft_isspace(int c);
int					ft_isxdigit(int c);

#endif