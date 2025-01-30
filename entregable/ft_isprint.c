#include "libft.h"

int ft_isprint(int c) {
    unsigned char uc = (unsigned char)c;  // Hacemos el casting para manejar valores fuera del rango de char.

    // Comprobamos si el valor está en el rango de caracteres imprimibles (32-126)
    if (uc >= 32 && uc <= 126) {
        return 1;  // Es un carácter imprimible
    }

    return 0;  // No es un carácter imprimible
}

