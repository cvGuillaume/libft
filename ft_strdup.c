#include "libft.h"

char    *ft_strdup(const char *s1)
{
    char *s2;

    if(!(s2 = malloc(sizeof(char) * ft_strlen(s1))))
        return(NULL);
    s2 = ft_strcpy(s2, s1);
    return (s2);
}