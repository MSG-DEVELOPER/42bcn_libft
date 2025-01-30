
#include "libft.h"
#include <stdlib.h>
#include <stddef.h>

char    calculachar(int n);
int     actualiza_num(int n);
size_t  averiguacifras(int n);
char    *ft_itoa(int n);

char    *ft_itoa(int n) 
{
    size_t  es_negativo;
    size_t  cifras;
    size_t  memoria;
    char    *p;
    int  i;

    es_negativo = 0;
    if (n < 0) 
    {
        es_negativo = 1;  // Marcamos que es negativo
        n = -n;           // Convertimos a positivo
    }

    cifras = averiguacifras(n);
    memoria = cifras + 1; // +1 para el '\0'

    if (es_negativo) 
    {
        memoria++; // Si es negativo, reservamos espacio adicional para el signo
    }

    p = (char *)malloc(memoria);
    if (p == NULL) 
    {
       
        return (NULL);
    }

    i = memoria - 1;
    p[i] = '\0'; // Terminador nulo
    i--;

    while (i >= 0) 
    {
        char c = calculachar(n);
        p[i] = c;
        n = actualiza_num(n);
        i--;

        if (n == 0) 
        {
            break; // Salimos del bucle una vez procesamos todas las cifras
        }
    }

    if (es_negativo) 
    {
        p[i] = '-'; // Agregamos el signo negativo en la primera posición
    }

    return (p);
}




char    calculachar(int n) 
{
    int     res;
    char    c;

    res = n % 10;
    c = res + '0';
    return (c);
}

int     actualiza_num(int n) 
{
    return (n / 10); // Dividimos entre 10 para eliminar la última cifra
}

size_t  averiguacifras(int n) 
{
    if (n < 0) 
    {
        n = -n;
    }

    size_t  cifras = 1; // Contamos la primera cifra

    while (n >= 10) 
    {
        n /= 10;
        cifras++;
    }

    return (cifras);
}
