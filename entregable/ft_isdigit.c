#include "libft.h"

int ft_isdigit(int c) {
    unsigned char uc = (unsigned char)c;

    if (uc >= '0' && uc <= '9') {
        return 1; // Es un dígito
    }
    return 0; // No es un dígito
}