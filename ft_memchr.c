#include "libft.h"

void	*memchr(const void *s, int c, size_t n)
{
	unsigned char *ptr;
	unsigned int a;

	ptr = (unsigned char *)s;
	a = (unsigned char)c;
	while (n--)
	{
		if (*ptr == a)
			return (ptr);
		
		ptr++;
	}
	return (NULL);
}