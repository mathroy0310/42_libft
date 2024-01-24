/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ctype.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maroy <maroy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 17:00:26 by maroy             #+#    #+#             */
/*   Updated: 2024/01/24 01:37:37 by maroy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_CTYPE_H
# define FT_CTYPE_H

# include "ft_stdint.h"

t_u8	ft_isalnum(t_u8 c);

t_u8	ft_str_isalnum(char *str);

t_u8	ft_isalpha(t_u8 c);

t_u8	ft_str_isalpha(char *str);

t_u8	ft_isascii(t_u8 c);

t_u8	ft_iscntrl(t_u8 c);

t_u8	ft_isdigit(t_u8 c);

t_u8	ft_str_isdigit(char *str);

t_u8	ft_isgraph(t_u8 c);

t_u8	ft_isprint(t_u8 c);

t_u8	ft_tolower(t_u8 c);

t_u8	ft_toupper(t_u8 c);

t_u8	ft_ispunct(t_u8 c);

t_u8	ft_isspace(t_u8 c);

t_u8	ft_isxdigit(t_u8 c);

char	*ft_str_toupper(char *str);

char	*ft_str_tolower(char *str);

#endif // FT_CTYPE_H
