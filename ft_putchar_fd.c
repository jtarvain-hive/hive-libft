#include "libft.h"

/* Outputs the character ’c’ to the specified 'fd'*/
void	ft_putchar_fd(char c, int fd)
{
	if (write(fd, &c, 1) == -1)
	{
		write(2, "Error in write()\n Exiting...\n", 29);
	}
}
