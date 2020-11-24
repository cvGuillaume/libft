#include "libft.h"

void	*ft_memccpy(void *restrict dst, const void *restrict src, int c, size_t n)
{
	unsigned char *dst2;
	unsigned char *src2;

	dst2 = (unsigned char *)dst;
	src2 = (unsigned char *)src;
	while (n > 0)
	{
		if (*src2 == (unsigned char)c)
			return (void *)(src);
		else
			 *dst2++ = *src2++;
		n--;
	}
	return (NULL);
}