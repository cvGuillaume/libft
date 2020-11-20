#include "libft.h"

int     ft_size_int_10(long nbr)
{
    int     i;

    i = 0;
    if (nbr < 0)
    {
      i++;
      nbr = -nbr;
    }
    while (nbr > 0)
    {
        nbr /= 10;
        i++;
    }
    return (i);
}

char    *ft_itoa(int n)
{
    long    nbr;
    int     i;
    char    *res;

    nbr = n;
    i = ft_size_int_10(nbr);
    if(!(res = (char*)malloc(sizeof(char) * (i + 1))))
      return (NULL);
    res[i--] = '\0';
    if (nbr < 0)
    {
      res[0] = '-';
      nbr = -nbr;
    }
    while (nbr > 0)
    {
      res[i] = nbr % 10 + 48;
      nbr /= 10;
      i--;
    }
    return (res);
}