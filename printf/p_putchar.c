#include "libft.h"

int	p_putchar(char **str, char c, int *count)
{
	write(1, &c, 1);
	(*count)++;
	(*str)++;
}

