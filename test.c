#include <ctype.h>
#include <stdio.h>
#include "libft.h"

typedef struct s_list
{
	void *content;
	struct s_list *next;
} t_list;



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