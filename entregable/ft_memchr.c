#include "libft.h"
#include <stddef.h>

void *ft_memchr(const void *s, int c, size_t n)
{
    const unsigned char *byte_ptr;
    unsigned char target;
    size_t i;

    byte_ptr = (const unsigned char *)s;
    target = (unsigned char)c;
    i = 0;
    while (i < n)
    {
        if (byte_ptr[i] == target)
            return ((void *)(byte_ptr + i));
        i++;
    }
    return (NULL);
}
