/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maroy <maroy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/08 11:14:12 by lduplain          #+#    #+#             */
/*   Updated: 2023/12/05 13:14:38 by maroy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_debug_printf(const char *format, ...)
{
	va_list	args;
	size_t	char_count;

	ft_printf("[DEBUG] : %*", 5);
	va_start(args, format);
	char_count = preprocess(format, args);
	va_end(args);
	return (char_count);
}

int	ft_printf(const char *format, ...)
{
	va_list	args;
	size_t	char_count;

	va_start(args, format);
	char_count = preprocess(format, args);
	va_end(args);
	return (char_count);
}
