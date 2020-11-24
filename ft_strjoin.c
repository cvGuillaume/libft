#include "libft.h"

int		ft_strlen_strlen(char **strs, int size)
{
	int i;
	int final;

	i = 0;
	final = 0;
	if (size == 0)
		return (0);
	while (i < size)
		final += ft_strlen(strs[i++]);
	return (final);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*final;
	int		len;
	int		i;

	if (size <= 0 || !sep || !strs)
	{
		if (!(final = malloc(sizeof(char))))
			return (NULL);
		final[0] = '\0';
		return (final);
	}
	len = ft_strlen(sep) * (size - 1) + ft_strlen_strlen(strs, size) + 1;
	if (!(final = malloc(sizeof(char) * len)))
		return (NULL);
	final[0] = 0;
	i = 0;
	while (i < size)
	{
		ft_strcat(final, strs[i++]);
		if (i < size)
			ft_strcat(final, sep);
	}
	final[len - 1] = '\0';
	return (final);
}