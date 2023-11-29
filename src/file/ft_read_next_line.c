/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_read_next_line.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maroy <maroy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/10 12:24:44 by lduplain          #+#    #+#             */
/*   Updated: 2023/11/28 23:33:29 by maroy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*get_first_line_part(char *source)
{
	char	*result;
	size_t	index;

	if (!source)
		return (NULL);
	index = 0;
	while (source[index] && source[index] != '\n')
		index++;
	result = ft_calloc(index + 1, sizeof(char));
	if (!result)
		return (NULL);
	index = 0;
	while (source[index] && source[index] != '\n')
	{
		result[index] = source[index];
		index++;
	}
	result[index] = 0;
	return (result);
}

static char	*get_second_line_part(char *source)
{
	char	*result;
	size_t	i;
	size_t	j;

	if (!source)
		return (NULL);
	i = ft_find_char(source, '\n') + 1;
	result = ft_calloc(ft_strlen(source) - i + 1, sizeof(char));
	if (!result)
		return (NULL);
	j = 0;
	while (source[i + j])
	{
		result[j] = source[i + j];
		j++;
	}
	result[j] = 0;
	ft_free(source);
	return (result);
}

static void	freeclear_readed_line(t_file *file)
{
	ft_free(file->readed_line);
}

static void	freeclear_backup(t_file *file)
{
	ft_free(file->p_backup);
}

t_read_status	ft_read_next_line(t_file *file)
{
	char		buffer[BUFFER_SIZE + 1];
	int			read_result;

	if (file->c_fd < 0 || file->c_fd >= FOPEN_MAX || BUFFER_SIZE < 1)
		return (read_error);
	read_result = 1;
	while (!ft_contains_char(file->p_backup, '\n') && read_result != 0)
	{
		read_result = read(file->c_fd, &buffer, BUFFER_SIZE);
		if (read_result == -1)
			return (read_error);
		buffer[read_result] = '\0';
		file->p_backup = ft_append_strs(file->p_backup, buffer, TRUE, FALSE);
	}
	if (file->readed_line)
		freeclear_readed_line(file);
	file->readed_line = get_first_line_part(file->p_backup);
	if (read_result == 0)
		freeclear_backup(file);
	if (read_result == 0)
		return (read_success_eof);
	file->p_backup = get_second_line_part(file->p_backup);
	return (read_success);
}
