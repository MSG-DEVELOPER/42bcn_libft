#include "libft.h"

size_t ft_strlen(const char *s) {
    if (!s) {
        return 0; // Devuelve 0 si el puntero es NULL
    }

    size_t i = 0;
    while (s[i] != '\0') {
        i++;
    }
    return i;
}

