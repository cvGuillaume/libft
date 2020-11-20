#include "libft.h"

void    *ft_memcpy(void *restrict dst, const void *restrict src, size_t n)
{
    unsigned char *dst2;
    unsigned char *src2;

    dst2 = (unsigned char *)dst;
    src2 = (unsigned char *)src;
    while (n > 0)
    {
        *dst2++ = *src2++;
        n--;
    }
    return (dst);
}