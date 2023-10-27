/* ************************************************************************** */
/*                                                                            */
/*                                                     ██   ██ ██████         */
/*   get_next_line.c                                   ██   ██      ██        */
/*                                                     ███████  █████         */
/*   By: maroy <maroy@student.42.qc>                        ██ ██             */
/*                                                          ██ ███████.qc     */
/*   Created: 2022/11/23 15:17:16 by marvin                                   */
/*   Updated: 2023/10/26 20:16:14 by maroy            >(.)__ <(.)__ =(.)__    */
/*                                                     (___/  (___/  (___/    */
/* ************************************************************************** */

#include "libft.h"
#define BUFFER_SIZE 1024
#include <stdbool.h>
#include <stdio.h>

typedef struct s_gnl
{
	char	buf[BUFFER_SIZE + 1];
	char	*cur;
	t_bool	done;
}			t_gnl;

long	read_fd(t_gnl *data, int fd, char *buf)
{
	long	br;

	br = read(fd, buf, BUFFER_SIZE);
	if (br >= 0)
		buf[br] = 0;
	if (br == 0)
		data->done = TRUE;
	return (br);
}

t_bool	init_data(t_gnl *data, int fd)
{
	if (read_fd(data, fd, data->buf) < 0)
		return (FALSE);
	data->cur = data->buf;
	return (TRUE);
}

char	*extend_line(t_gnl *data, char *line)
{
	char	*extend;

	extend = ft_strjoin(line, data->cur);
	free(line);
	return (extend);
}

char	*get_next_line(int fd)
{
	static t_gnl	data;
	char			*line;
	long			br;

	if ((!data.cur && !init_data(&data, fd)) || data.done)
		return (NULL);
	line = ft_strdup("");
	while (!ft_strchr(data.cur, '\n'))
	{
		line = extend_line(&data, line);
		if (!line)
			return (NULL);
		br = read_fd(&data, fd, data.buf);
		if (br < 0)
			return (NULL);
		else if (!br)
			return (line);
		data.cur = data.buf;
	}
	*(ft_strchr(data.cur, '\n')) = 0;
	line = extend_line(&data, line);
	if (!line)
		return (NULL);
	data.cur = ft_strchr(data.cur, 0) + 1;
	return (line);
}
