/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_str.h                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maroy <maroy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/14 14:23:47 by lduplain          #+#    #+#             */
/*   Updated: 2024/01/24 01:49:57 by maroy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_DISPLAY_STR_H
# define FT_DISPLAY_STR_H

# include "libft.h"

size_t	ft_putstr_fd(int fd, char *str);

size_t	ft_putstr_fdnl(int fd, char *str);

size_t	ft_putstr(char *str);

size_t	ft_putstr_nl(char *str);

size_t	ft_putstr_err(char *str);

size_t	ft_putstr_errnl(char *str);

#endif
