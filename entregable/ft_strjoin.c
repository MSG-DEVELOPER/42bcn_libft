#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

char *ft_strjoin(char const *s1, char const *s2);

int main() {
    // Caso 1: Cadenas normales
    {
        char array1[] = "Hola, ";
        char array2[] = "mundo!";
        char *result = ft_strjoin(array1, array2);
        if (result) {
            printf("Caso 1: %s (Esperado: Hola, mundo!)\n", result);
            free(result);
        } else {
            printf("Caso 1: Error\n");
        }
    }

    // Caso 2: Una cadena vacía y otra normal
    {
        char array1[] = "";
        char array2[] = "12345";
        char *result = ft_strjoin(array1, array2);
        if (result) {
            printf("Caso 2: %s (Esperado: 12345)\n", result);
            free(result);
        } else {
            printf("Caso 2: Error\n");
        }
    }

    // Caso 3: Ambas cadenas vacías
    {
        char array1[] = "";
        char array2[] = "";
        char *result = ft_strjoin(array1, array2);
        if (result) {
            printf("Caso 3: \"%s\" (Esperado: \"\")\n", result); // Cadena vacía esperada
            free(result);
        } else {
            printf("Caso 3: Error\n");
        }
    }

    // Caso 4: Una cadena NULL
    {
        char *array1 = NULL;
        char array2[] = "12345";
        char *result = ft_strjoin(array1, array2);
        if (result) {
            printf("Caso 4: %s\n", result);
            free(result);
        } else {
            printf("Caso 4: Error (Esperado: Error)\n");
        }
    }

    // Caso 5: Ambas cadenas NULL
    {
        char *array1 = NULL;
        char *array2 = NULL;
        char *result = ft_strjoin(array1, array2);
        if (result) {
            printf("Caso 5: %s\n", result);
            free(result);
        } else {
            printf("Caso 5: Error (Esperado: Error)\n");
        }
    }

    // Caso 6: Cadenas largas
    {
        char array1[] = "Esta es una cadena muy larga ";
        char array2[] = "y esta es otra cadena igualmente larga para comprobar.";
        char *result = ft_strjoin(array1, array2);
        if (result) {
            printf("Caso 6: %s (Esperado: Esta es una cadena muy larga y esta es otra cadena igualmente larga para comprobar.)\n", result);
            free(result);
        } else {
            printf("Caso 6: Error\n");
        }
    }

    // Caso 7: Caracteres especiales
    {
        char array1[] = "Hola\n";
        char array2[] = "Mundo\t!";
        char *result = ft_strjoin(array1, array2);
        if (result) {
            printf("Caso 7: %s (Esperado: Hola\\nMundo\\t!)\n", result);
            free(result);
        } else {
            printf("Caso 7: Error\n");
        }
    }

    // Caso 8: Una cadena con espacios
    {
        char array1[] = "    ";
        char array2[] = "Espacios";
        char *result = ft_strjoin(array1, array2);
        if (result) {
            printf("Caso 8: \"%s\" (Esperado: \"    Espacios\")\n", result);
            free(result);
        } else {
            printf("Caso 8: Error\n");
        }
    }

    // Caso 9: Concatenación de números como cadenas
    {
        char array1[] = "123";
        char array2[] = "456";
        char *result = ft_strjoin(array1, array2);
        if (result) {
            printf("Caso 9: %s (Esperado: 123456)\n", result);
            free(result);
        } else {
            printf("Caso 9: Error\n");
        }
    }

    return 0;
}

char *ft_strjoin(char const *s1, char const *s2) {
    // Comprobamos que los punteros no sean NULL
    if (!s1 || !s2) {
        return NULL;
    }

    // Calculamos las longitudes
    size_t size1 = 0;
    size_t size2 = 0;

    while (s1[size1] != '\0') {
        size1++;
    }
    while (s2[size2] != '\0') {
        size2++;
    }

    // Calculamos el tamaño total
    size_t total_size = size1 + size2 + 1;

    // Reservamos memoria
    char *result = (char *)malloc(total_size * sizeof(char));
    if (!result) {
        return NULL; // Manejo de error si malloc falla
    }

    // Copiamos s1 en result
    size_t i = 0;
    while (i < size1) {
        result[i] = s1[i];
        i++;
    }

    // Concatenamos s2 en result
    size_t j = 0;
    while (j < size2) {
        result[i] = s2[j];
        i++;
        j++;
    }

    // Agregamos el terminador nulo
    result[i] = '\0';

    return result;
}
