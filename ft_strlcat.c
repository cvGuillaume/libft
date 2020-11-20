#include "libft.h"

size_t ft_strlcat(char *restrict dst, const char *restrict src, size_t dstsize)
{
	size_t i;
	size_t j;
	size_t a;

	i = 0;
	j = 0;
	a = 0;
	while (dst[i])
		i++;
	while (src[a])
		a++;
	if (dstsize <= i)
		a = a + dstsize;
	else
		a = i + a;
	while (src[j] && i + 1 < dstsize)
		dst[i++] = src[j++];
	dst[i] = '\0';
	return (a);
}