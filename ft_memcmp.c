/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hahabib <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/08 20:58:48 by hahabib           #+#    #+#             */
/*   Updated: 2026/01/02 20:54:06 by hahabib          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t				i;
	const unsigned char	*sone;
	const unsigned char	*stwo;

	sone = (const unsigned char *)s1;
	stwo = (const unsigned char *)s2;
	i = 0;
	while (i < n)
	{
		if (sone[i] != stwo[i])
			return (sone[i] - stwo[i]);
		i++;
	}
	return (0);
}
