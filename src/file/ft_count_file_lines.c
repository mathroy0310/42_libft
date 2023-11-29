/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_file_lines.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maroy <maroy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/21 16:39:05 by lduplain          #+#    #+#             */
/*   Updated: 2023/11/28 23:22:43 by maroy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <fcntl.h>

ssize_t	ft_count_file_lines(char *path)
{
	t_file			*file;
	ssize_t			counter;
	t_read_status	read_status;

	file = ft_open_file(path, O_RDONLY);
	if (file == NULL)
		return (read_error);
	counter = 0;
	read_status = ft_read_next_line(file);
	while (read_status)
	{
		counter++;
		read_status = ft_read_next_line(file);
	}
	ft_close_file(file);
	if (read_status == read_error)
		return (read_error);
	return (counter + 1);
}
