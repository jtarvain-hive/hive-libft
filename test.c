#include "libft.h"
#include <fcntl.h>
#include <stdio.h>

int main(int ac, char **av)
{
    int fd;
    char *line;
    (void)ac;
    fd = open(av[1], O_RDONLY);
    if (fd == -1)
    {
        perror("Error opening file");
        return (1);
    }
    while ((line = get_next_line(fd)) != NULL)
    {
        printf("%s", line);
        free(line);
    }
    close(fd);
    return (0);
}