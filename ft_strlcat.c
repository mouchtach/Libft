/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymouchta <ymouchta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 10:43:59 by ymouchta          #+#    #+#             */
/*   Updated: 2024/10/25 11:24:45 by ymouchta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	dlen;
	size_t	slen;
	size_t	i;
	size_t	j;

	i = 0;
	slen = ft_strlen(src);
	if (!dst && dstsize == 0 && src)
		return (slen);
	dlen = ft_strlen(dst);
	j = dlen;
	if (dlen >= dstsize)
		return (slen + dstsize);
	while (j < dstsize - 1 && src[i])
	{
		dst[j] = src[i];
		j++;
		i++;
	}
	dst[j] = '\0';
	return (dlen + slen);
}
