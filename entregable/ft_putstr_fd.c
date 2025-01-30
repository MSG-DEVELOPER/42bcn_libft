#include "libft.h"
#include <unistd.h>

void ft_putstr_fd(char *s, int fd)
{
	 if (fd == -1)
        return;
    int i = 0;
    while (s[i] != '\0')
    {
        write(fd, &s[i], 1);
        i++;
    }
}