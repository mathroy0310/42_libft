/* ************************************************************************** */
/*                                                                            */
/*                                                     ██   ██ ██████         */
/*   ft_abs.c                                          ██   ██      ██        */
/*                                                     ███████  █████         */
/*   By: maroy <maroy@student.42.qc>                        ██ ██             */
/*                                                          ██ ███████.qc     */
/*   Created: 2023/08/01 15:23:03 by maroy                                    */
/*   Updated: 2023/10/26 20:06:30 by maroy            >(.)__ <(.)__ =(.)__    */
/*                                                     (___/  (___/  (___/    */
/* ************************************************************************** */

#include "libft.h"

int	ft_abs(int j)
{
	if (j < 0)
		return (-j);
	return (j);
}

long int	ft_labs(long int j)
{
	if (j < 0)
		return (-j);
	return (j);
}

long long int	ft_llabs(long long int j)
{
	if (j < 0)
		return (-j);
	return (j);
}
