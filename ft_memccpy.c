/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcornet- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/24 14:56:54 by gcornet-          #+#    #+#             */
/*   Updated: 2020/11/24 14:56:55 by gcornet-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t			i;
	unsigned char	*s;
	unsigned char	*d;

	i = 0;
	s = (unsigned char *)src;
	d = (unsigned char *)dst;
	while (i < n)
	{
		d[i] = s[i];
		if (s[i] == (unsigned char)c)
			return (dst + i + 1);
		i++;
	}
	return (NULL);
}

// void	*ft_memccpy(void *dst, const void *src, int c,
// 					size_t n)
// {
// 	const void	*p = ft_memchr(src, c, n);

// 	if (p != NULL)
// 	{
// 		n = p - src + 1;
// 		return (ft_memcpy(dst, src, n) + n);
// 	}
// 	ft_memcpy(dst, src, n);
// 	return (NULL);
// }