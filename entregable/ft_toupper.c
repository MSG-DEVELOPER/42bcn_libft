#include "libft.h"

int ft_toupper(int c)
{
    unsigned char letter;

    letter = (unsigned)c;
    if (letter > 96 && letter < 123)
    {
        return (letter - 32);
    }
    return (letter);
}
