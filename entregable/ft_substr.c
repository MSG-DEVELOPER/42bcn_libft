#include "libft.h"

#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

char *ft_substr(char const *s, unsigned int start, size_t len);

int main() {
    char array[] = "holacar";
    char const *puntero = array;

    unsigned int start = 1;
    size_t len = 20;

    char *puntero2 = ft_substr(puntero, start, len);

    if (puntero2) {
        printf("%s\n", puntero2);
        free(puntero2);
    } else {
        printf("Error al generar la substring.\n");
    }

    return 0;
}

// Función
char *ft_substr(char const *s, unsigned int start, size_t len) {
    if (s == NULL) {
        return NULL;
    }

    // Calcular longitud de la cadena original
    size_t size_s = 0;
    while (s[size_s] != '\0') {
        size_s++;
    }

    // Si start está fuera de los límites, devolver cadena vacía
    if (start >= size_s) {
        char *empty_str = (char *)malloc(1);
        if (empty_str == NULL) {
            return NULL;
        }
        empty_str[0] = '\0';
        return empty_str;
    }

    // Calcular longitud real de la substring
    size_t actual_len = (start + len > size_s) ? size_s - start : len;

    // Reservar memoria para la substring
    char *substr = (char *)malloc((actual_len + 1) * sizeof(char));
    if (substr == NULL) {
        return NULL;
    }

    // Copiar caracteres de la cadena original a la substring
    size_t i = 0;
    while (i < actual_len) {
        substr[i] = s[start + i];
        i++;
    }

    // Asignar terminador nulo
    substr[i] = '\0';

    return substr;
}
