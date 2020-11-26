/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcornet- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/24 15:02:21 by gcornet-          #+#    #+#             */
/*   Updated: 2020/11/24 15:02:23 by gcornet-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t i;
	size_t j;

	if (!haystack || !needle)
		return (NULL);
	if (!needle)
		return (char *)(haystack);
	i = 0;
	while (haystack[i] && len > i)
	{
		j = 0;
		while (needle[j] && haystack[i + j] && (j + i < len)
			&& haystack[i + j] == needle[j])
			j++;
		if (needle[j] == '\0')
			return (char *)(haystack + i);
		i++;
	}
	return (NULL);
}