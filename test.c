#include <ctype.h>
#include <stdio.h>
#include "libft.h"

int main()
{
	//ft_split test
	char **array = ft_split("Hello , brother , I'm , home ", ' ');
	for (int i = 0; array[i] != NULL; i++)
	{
		printf("%s\n", array[i]);
		printf("%d\n", i);
	}
	//ft_itoa test
	char *itoa = ft_itoa(-0);
	printf("%s\n", itoa);
	return (0);
}