/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hahabib <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/28 14:30:06 by hahabib           #+#    #+#             */
/*   Updated: 2026/01/12 16:22:54 by hahabib          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	odst;
	size_t	osrc;

	osrc = ft_strlen(src);
	if (!dst && size == 0)
		return (osrc);
	odst = 0;
	while (odst < size && dst[odst])
		odst++;
	if (odst == size)
		return (size + osrc);
	i = 0;
	while (src[i] && odst + i + 1 < size)
	{
		dst[odst + i] = src[i];
		i++;
	}
	if (odst + i < size)
		dst[odst + i] = '\0';
	return (odst + osrc);
}
