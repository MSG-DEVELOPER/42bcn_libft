#include "libft.h"

int ft_isalnum(int c) {
    unsigned char uc = (unsigned char)c;  // Casting para asegurar que el valor esté en el rango de unsigned char

    // Comprobamos si el carácter es una letra o un dígito
    if (ft_isalpha(uc) || ft_isdigit(uc)) {
        return 1;  // Es alfanumérico
    }
    return 0;  // No es alfanumérico
}
