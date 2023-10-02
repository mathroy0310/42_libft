/* ************************************************************************** */
/*                                                                            */
/*                                                     ██   ██ ██████         */
/*   ft_pow.c                                          ██   ██      ██        */
/*                                                     ███████  █████         */
/*   By: maroy <maroy@student.42.qc>                        ██ ██             */
/*                                                          ██ ███████.qc     */
/*   Created: 2023/08/01 15:22:09 by maroy                                    */
/*   Updated: 2023/08/15 17:07:19 by maroy            >(.)__ <(.)__ =(.)__    */
/*                                                     (___/  (___/  (___/    */
/* ************************************************************************** */

#include "../inc/libft.h"

double	ft_pow(double x, double y)
{
	double	result;

	result = 1;
	while (y > 0)
	{
		result *= x;
		y--;
	}
	return (result);
}
