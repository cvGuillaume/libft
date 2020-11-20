#include "libft.h"

char    *ft_strncat(char *s1, const char *s2, size_t n)
{
    int i;

    i = 0;
    while (s2[i] && (n > 0))
    {
        s1[ft_strlen(s1) + i] = s2[i];
        i++;
        n--;
    }
    s1[ft_strlen(s1) + i] = '\0';
    return (s1);
}