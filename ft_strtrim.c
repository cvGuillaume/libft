/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcornet- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/24 15:02:50 by gcornet-          #+#    #+#             */
/*   Updated: 2020/11/24 15:02:52 by gcornet-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strtrim(char const *s)
{
	int		i;
	int		j;
	int		z;
	char	*str;

	i = 0;
	j = 2;
	z = 0;
	while (s[i] == ' ' || s[i] == '\n' || s[i] == '\t')
		i++;
	while (s[ft_strlen(s) - j] == ' ' || s[ft_strlen(s) - j] == '\n'
		|| s[ft_strlen(s) - j] == '\t')
		j++;
	j = ft_strlen(s) - i - j;
	if (!(str = ft_calloc((j + 1), sizeof(char))))
		return (NULL);
	while (z < j)
	{
		str[z] = s[i];
		z++;
		i++;
	}
	str[z] = '\0';
	return (str);
}
