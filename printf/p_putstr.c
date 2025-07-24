#include "libft.h"

int	p_putstr(const char *str)
{
	int	count;

	count = 0;
	if (!str)
		return (write(1, "(null)", 6));
	while (str[count])
		write(1, &str[count++], 1);
	return (count);
}
