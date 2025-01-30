#include "libft.h"

int ft_isascii(int c) {
    unsigned char uc = (unsigned char)c;  // Hacemos el casting para manejar cualquier valor fuera del rango de char.

    // Comprobamos si el valor está en el rango de 0 a 127 (valores ASCII)
    if (uc <= 127) {
        return 1;  // Es un valor ASCII válido
    }

    return 0;  // No es un valor ASCII
}
