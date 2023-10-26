/* ************************************************************************** */
/*                                                                            */
/*                                                     ██   ██ ██████         */
/*   ft_strchr.c                                       ██   ██      ██        */
/*                                                     ███████  █████         */
/*   By: maroy <maroy@student.42.qc>                        ██ ██             */
/*                                                          ██ ███████.qc     */
/*   Created: 2022/10/18 13:41:06 by maroy                                    */
/*   Updated: 2023/10/26 15:59:39 by maroy            >(.)__ <(.)__ =(.)__    */
/*                                                     (___/  (___/  (___/    */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	char	*s;
	size_t	i;

	s = (char *)str;
	i = 0;
	while (i <= ft_strlen(str))
	{
		if (s[i] == (char)c)
			return (s + i);
		i++;
	}
	return (0);
}
