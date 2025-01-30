#include "libft.h"
#include <stddef.h>
#include <stdlib.h>

void	*ft_calloc(size_t nmemb, size_t size)
{
	void			*puntero;
	unsigned char	*puntero_char;
	size_t			i;

	// Si nmemb o size es 0, devolver NULL
	if (nmemb == 0 || size == 0)
		return (malloc(0));//retorna puntero valido aunque sin memoria asignaad para que s epueda liberar con free

	puntero = malloc(nmemb * size);
	if (!puntero)
		return (NULL);

	puntero_char = (unsigned char *)puntero;
	i = 0;
	while (i < (nmemb * size))
	{
		puntero_char[i] = 0;
		i++;
	}
	return (puntero);
}
