#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t i;
	size_t j;

	if (*needle == '\0')
		return (char *)(haystack);
	i = 0;
	while (haystack[i] && len > 0)
	{
		j = 0;
		while (needle[j] == haystack[i + j] && (j + i <= len))
		{
			if (needle[j + 1] == '\0')
				return (char *)(haystack + i);
			j++;
		}
		len--;
		i++;
	}
	return (0);
}