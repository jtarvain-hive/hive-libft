#include "libft.h"

int	p_putchar(int c)
{
	return (write(1, &c, 1));
}
