/* ************************************************************************** */
/*                                                                            */
/*                                                     ██   ██ ██████         */
/*   ft_is_white_space.c                               ██   ██      ██        */
/*                                                     ███████  █████         */
/*   By: maroy <maroy@student.42.qc>                        ██ ██             */
/*                                                          ██ ███████.qc     */
/*   Created: 2023/08/29 20:05:01 by maroy                                    */
/*   Updated: 2023/10/17 17:17:16 by maroy            >(.)__ <(.)__ =(.)__    */
/*                                                     (___/  (___/  (___/    */
/* ************************************************************************** */

#include "libft.h"

int	is_white_space(char *buff)
{
	int	i;

	i = 0;
	while (buff[i] == 32 || buff[i] == '\t')
		i++;
	if (buff[i] == '\0')
		return (1);
	return (0);
}
