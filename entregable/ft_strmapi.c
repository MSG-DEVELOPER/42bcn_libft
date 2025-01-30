#include "libft.h"
#include <stdlib.h>
#include <stddef.h>
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	i;
	size_t	j;
	char	*puntero;

	if (!s)
		return (NULL);
	i = 0;
	while (s[i] != '\0')
		i++;
	puntero = (char *)malloc(i + 1);
	if (!puntero)
		return (NULL);
	j = 0;
	while (s[j] != '\0')
	{
		puntero[j] = f(j, s[j]);
		j++;
	}
	puntero[j] = '\0';
	return (puntero);
}
