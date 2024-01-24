/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_converter.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maroy <maroy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/09 13:16:50 by lduplain          #+#    #+#             */
/*   Updated: 2024/01/24 01:37:58 by maroy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_CONVERTER_H
# define FT_CONVERTER_H

# include "ft_bool.h"
# include "libft.h"

int			ft_atoi(char *str);
int			ft_natoi(char *str, size_t n);
long long	ft_atoll(char *str);
char		*ft_ulltoa_ibase(unsigned long long number, int ibase,
				t_bool uppercase);
char		*ft_lltoa_ibase(long long number, int ibase, t_bool uppercase);
float		ft_atof(const char *str);
long		ft_atol(const char *str);

#endif // FT_CONVERTER_H
