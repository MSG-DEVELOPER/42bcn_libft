#include "libft.h"
#include <stdlib.h>

char *ft_strdup(char *src)
{
    int i = 0;
    while (src[i] != '\0')
        i++;
    
    char *p = (char*)malloc(sizeof(char) * (i + 1));
    if (p == NULL)
        return NULL;

    int j = 0;
    while (j < i)
    {
        p[j] = src[j];
        j++;
    }

    p[i] = '\0';
    return p;
}
