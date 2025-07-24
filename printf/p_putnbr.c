#include "libft.h"

int	p_putnbr(int n)
{
	long	number;
	int		count;

	count = 0;
	number = n;
	if (number < 0)
	{
		count += p_putchar('-');
		number = -number;
	}
	if (number > 9)
		count += p_putnbr(number / 10);
	count += p_putchar((number % 10) + '0');
	return (count);
}

int	p_putunsigned(unsigned int n)
{
	int	count;

	count = 0;
	if (n > 9)
		count += p_putunsigned(n / 10);
	count += p_putchar((n % 10) + '0');
	return (count);
}
