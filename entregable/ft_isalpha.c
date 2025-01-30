#include "libft.h"
#include <stdio.h>

int ft_isalpha(int c) {
    unsigned char uc = (unsigned char)c;

    if ((uc > 64 && uc < 91) || (uc > 96 && uc < 123)) {//falta añadir ñ y Ñ
        return 1;
    }
    return 0;
}

int main() {
    // Test de caracteres alfabéticos
    printf("Test 1: 'A' -> %d (esperado: 1)\n", ft_isalpha('A')); // Mayúscula
    printf("Test 2: 'z' -> %d (esperado: 1)\n", ft_isalpha('z')); // Minúscula
    printf("Test 3: 'm' -> %d (esperado: 1)\n", ft_isalpha('m')); // Minúscula
    printf("Test 4: 'Z' -> %d (esperado: 1)\n", ft_isalpha('Z')); // Mayúscula

    // Test de caracteres no alfabéticos
    printf("Test 5: '1' -> %d (esperado: 0)\n", ft_isalpha('1')); // Número
    printf("Test 6: '#' -> %d (esperado: 0)\n", ft_isalpha('#')); // Símbolo
    printf("Test 7: ' ' -> %d (esperado: 0)\n", ft_isalpha(' ')); // Espacio
    printf("Test 8: '9' -> %d (esperado: 0)\n", ft_isalpha('9')); // Número

    // Test de valores fuera del rango de char estándar
    printf("Test 9: 340 -> %d (esperado: 1)\n", ft_isalpha(340)); // 340 % 256 = 84 (letra 'T')
    printf("Test 10: -1 -> %d (esperado: 0)\n", ft_isalpha(-1));  // Valor negativo
    printf("Test 11: 255 -> %d (esperado: 0)\n", ft_isalpha(255)); // 255 corresponde a carácter extendido no alfabético

    return 0;
}
