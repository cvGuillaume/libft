#include <stdlib.h>

int		spot_charset(char c, char *charset)
{
	int		i;

	i = 0;
	while (charset[i])
	{
		if (c == charset[i])
			return (1);
		i++;
	}
	return (0);
}

int		compte_mot(char *str, char *charset)
{
	int		counter;
	int		i;
	int		check;

	counter = 0;
	i = 0;
	check = 0;
	while (str[i])
	{
		if (spot_charset(str[i], charset) == 1)
			check = 0;
		else if (check == 0)
		{
			check = 1;
			counter++;
		}
		i++;
	}
	return (counter);
}

char	**sep(char **mat, char *str, char *charset, int len)
{
	int	y;
	int	x;
	int z;

	y = 0;
	z = 0;
	x = 0;
	while (y < compte_mot(str, charset))
	{
		len = 0;
		while (str[z] && spot_charset(str[z], charset) == 1)
			z++;
		while (str[z++] && spot_charset(str[z], charset) == 0)
			len++;
		if (!(mat[y] = malloc(sizeof(char) * len + 1)))
			return (0);
		x = -1;
		while (++x <= len)
			mat[y][x] = str[x + z - len - 1];
		mat[y][x] = '\0';
		y++;
	}
	mat[y] = NULL;
	return (mat);
}

char	**ft_split(char *str, char *charset)
{
	char	**mat;
	int		len;

	len = 0;
	if (!(mat = malloc(sizeof(char*) * compte_mot(str, charset) + 1)))
		return (NULL);
	sep(mat, str, charset, len);
	return (mat);
}