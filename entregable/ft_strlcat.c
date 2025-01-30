#include "libft.h"
#include <stddef.h>

size_t calculate_len(const char *s);

size_t ft_strlcat(char *dest, const char *src, size_t size)
{
    size_t len_dest;
    size_t len_src;
    size_t i;

    len_dest = calculate_len(dest);
    len_src = calculate_len(src);

    if (size <= len_dest)
        return (len_src + size);

    i = 0;
    while (src[i] != '\0' && len_dest + i < size - 1)
    {
        dest[len_dest + i] = src[i];
        i++;
    }
    dest[len_dest + i] = '\0';

    return (len_dest + len_src);
}

size_t calculate_len(const char *s)
{
    size_t i;

    i = 0;
    while (s[i] != '\0')
        i++;

    return i;
}
