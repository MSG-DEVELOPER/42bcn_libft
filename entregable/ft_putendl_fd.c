#include "libft.h"
#include <unistd.h>

void ft_putendl_fd(char *s, int fd) {
    if (fd == -1)
        return;
    
    while (*s != '\0') {
        write(fd, s, 1);
        s++;
    }
    
    write(fd, "\n", 1);
}