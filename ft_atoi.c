#include "libft.h"

int		ft_atoi(char const *str)
{
	int			i;
	long int	final;
	int			sign;

	sign = 1;
	i = 0;
	final = 0;
	while (str[i] == '\f' || str[i] == '\t' || str[i] == ' '
		|| str[i] == '\v' || str[i] == '\n' || str[i] == '\r')
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign = -sign;
		i++;
	}
	while ('0' <= str[i] && str[i] <= '9')
	{
		final = final * 10 + str[i] - '0';
		i++;
	}
	return (int)(sign * final);
}