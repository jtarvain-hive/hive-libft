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
	//printf("Value: %d\n", ft_isdigit('A'));
	//printf("Value: %d\n", ft_isalpha('A'));
	printf("Value: %d\n", atoi("10000000000011100"));
	return (0);
}