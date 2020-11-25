/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcornet- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/24 15:01:02 by gcornet-          #+#    #+#             */
/*   Updated: 2020/11/24 15:01:03 by gcornet-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcat(char *dest, const char *src)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (dest[i])
		i++;
	while (src[j])
	{
		dest[i] = src[j];
		j++;
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

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
		if (!(final = ft_calloc(1, sizeof(char))))
			return (NULL);
		final[0] = '\0';
		return (final);
	}
	len = ft_strlen(sep) * (size - 1) + ft_strlen_strlen(strs, size) + 1;
	if (!(final = ft_calloc(len, sizeof(char))))
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
