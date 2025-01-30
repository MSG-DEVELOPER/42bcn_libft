#include "libft.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

size_t calcular_size(char *s, size_t i, char c);
void llenar_puntero(char **puntero, size_t p, char *array, size_t size);
size_t calular_palabras(const char *array_original, char delim);
char **ft_split(char const *s, char c);
void liberar_memoria(char **puntero, size_t p);

char **ft_split(char const *s, char c)
{
    size_t palabras;
    char **puntero;
    size_t indiceActual;
    size_t p;
    size_t tamano;

    palabras = calular_palabras(s, c);
    puntero = (char **)malloc((palabras + 1) * sizeof(char *));
    indiceActual = 0;
    p = 0;

    if (puntero == NULL)
        return NULL;

    while (s[indiceActual] != '\0')
    {
        tamano = calcular_size((char *)s, indiceActual, c);
        puntero[p] = (char *)malloc((tamano + 1) * sizeof(char));
        if (puntero[p] == NULL)
        {
            liberar_memoria(puntero, p);  // Liberar memoria si malloc falla
            return NULL;
        }
        llenar_puntero(puntero, p, (char *)s, tamano);
        indiceActual += tamano + 1;
        p++;
    }
    puntero[p] = NULL;

    return puntero;
}

size_t calular_palabras(const char *array_original, char delim)
{
    size_t coincidencias;
    size_t i;

    coincidencias = 0;
    i = 0;

    while (array_original[i] != '\0')
    {
        if (array_original[i] == delim)
            coincidencias++;
        i++;
    }

    return coincidencias + 1;
}

size_t calcular_size(char *s, size_t i, char c)
{
    size_t size;

    size = 0;
    while ((s[i] != c) && (s[i] != '\0'))
    {
        i++;
        size++;
    }

    return size;
}

void llenar_puntero(char **puntero, size_t p, char *array, size_t size)
{
    size_t i;
    static size_t j;

    i = 0;
    while (size > i)
    {
        puntero[p][i] = array[j];
        i++;
        j++;
    }
    puntero[p][i] = '\0';
    j++;
}

void liberar_memoria(char **puntero, size_t p)
{
    size_t i = 0;

    while (i < p)
    {
        free(puntero[i]);
        i++;
    }

    free(puntero);
}
