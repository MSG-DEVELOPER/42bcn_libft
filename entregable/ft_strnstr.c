#include "libft.h"
#include <stddef.h>

char *strnstr(const char *haystack, const char *needle, size_t len);
int compare(const unsigned char *s1, const unsigned char *s2, size_t len);

char *strnstr(const char *haystack, const char *needle, size_t len)
{
    size_t i;
    size_t needle_len;

    if (*needle == '\0')
        return (char *)haystack;
    needle_len = ft_strlen(needle);
    if (needle_len > len)
        return NULL;
    i = 0;
    while (i < len)
    {
        if (haystack[i] == needle[0])
        {
            if (compare((const unsigned char *)&haystack[i],
                        (const unsigned char *)needle, len - i))
                return (char *)&haystack[i];
        }
        i++;
    }
    return NULL;
}

int compare(const unsigned char *s1, const unsigned char *s2, size_t len)
{
    size_t i;

    i = 0;
    while (i < len && s2[i] != '\0')
    {
        if (s1[i] != s2[i])
            return 0;
        i++;
    }
    return 1;
}
