#include "libft.h"

int		t_isprint(int c)
{
	if (' ' <= c && c <= '~')
		return (1);
	return (0);
}