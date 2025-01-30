#include "libft.h"

#include <unistd.h>
#include <stdlib.h>

void	ft_putnbr_fd(int n, int fd)
{
	char	*p;
	size_t	i;

	p = ft_itoa(n);
	if (!p)
		return;
	i = 0;
	while (p[i] != '\0')
	{
		write(fd, &p[i], 1);
		i++;
	}
	free(p);
}
