#include "inc/libft.h"

int	main(void)
{
	char	*str;
	char	*bruh;

	str = "\t     \tallo";
	bruh = ft_skip_charset(str, " \t");
	ft_printf(bruh);
}
