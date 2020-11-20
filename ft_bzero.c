#include "libft.h"

void    ft_bzero(void *s, size_t n)
{
    unsigned char *s2;

    s2 = (unsigned char *)s;
    while (n > 0)
    {
        *s2++ = '\0';
        n--;
    }
}