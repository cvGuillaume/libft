#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char *b2;
	size_t i;

	b2 = (unsigned char *)b;
	i = 0;
	while (len > 0)
	{
		b2[i] = c;
		len--;
		i++;
	}
	return (b);
}