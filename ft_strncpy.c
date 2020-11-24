#include "libft.h"

char	*ft_strncpy(char *dst, const char *src, size_t len)
{
	int i;

	i = 0;
	while (src[i] && (0 < len))
	{
		dst[i] = src[i];
		i++;
		len--;
	}
	dst[i] = '\0';
	return (dst);
}