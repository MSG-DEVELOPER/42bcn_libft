#include "libft.h"

int ft_tolower(int c)
{
    unsigned char letter;

    letter = (unsigned)c;
    if (letter >= 'A' && letter <= 'Z')
    {
        return (letter + 32);
    }
    return (letter);
}
