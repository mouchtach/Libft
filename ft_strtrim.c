/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymouchta <ymouchta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 08:21:11 by ymouchta          #+#    #+#             */
/*   Updated: 2024/10/31 09:36:10 by ymouchta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	size_t	len;

	i = 0;
	if (!s1)
		return (NULL);
	if (!set || s1[i] == '\0')
		return (ft_strdup(s1));
	len = ft_strlen(s1);
	while (ft_strchr(set, s1[i]))
		i++;
	while (ft_strchr(set, s1[len - 1]))
		len--;
	return (ft_substr(s1, i, len - i));
}
