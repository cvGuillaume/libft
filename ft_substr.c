#include "libft.h"

char    *ft_substr(char const *s, unsigned int start, size_t len)
{
    char    *s2;
    int     i;

    i = 0;
    if (!(s2 = malloc(sizeof(*s) * (len + 1))))
        return (NULL);
    while (s[start] && i < len)
    {
        s2[i] = s[start];
        i++;
        start++;
    }
    s2[i] = 0;
    return (s2);
}