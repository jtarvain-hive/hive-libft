#include <ctype.h>
#include <stdio.h>
#include "libft.h"

typedef struct s_list
{
	void *content;
	struct s_list *next;
} t_list;

int	ft_atoi(const char *nptr)
{
	long	total;
	int		negative;

	total = 0;
	negative = 1;
	while (ft_isspace(*nptr))
		nptr++;
	if (*nptr == '-')
	{
		negative *= -1;
		nptr++;
	}
	else if (*nptr == '+')
		nptr++;
	while (*nptr != '\0' && ft_isdigit(*nptr))
	{
		total = total * 10 + (*nptr - '0');
		if (total < 0 && negative == 1)
		{
			printf("here1\n");
			return (-1);
		}
		if (total < 0 && negative == -1)
		{
			printf("here2\n");
			return (0);
		}
		nptr++;
	}
	return ((int)(total * negative));
}



int main()
{
	//printf("Value: %d\n", ft_isdigit('A'));
	//printf("Value: %d\n", ft_isalpha('A'));
	printf("Value: %d\n", ft_atoi("-1111111111"));
	printf("Value: %d\n", atoi("-1111111111"));
	return (0);
}