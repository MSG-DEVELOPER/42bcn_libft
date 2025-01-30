#include "libft.h"
#include <unistd.h>

void ft_putchar_fd(char c, int fd)
{
    if (fd == -1)
        return;
    write(fd, &c, 1);
}
