/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hahabib <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/11 20:39:01 by hahabib           #+#    #+#             */
/*   Updated: 2026/01/06 20:05:00 by hahabib          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*new;
	size_t	len;
	size_t	start;
	size_t	end;

	if (!s1)
		return (NULL);
	len = ft_strlen(s1);
	start = 0;
	while (s1[start] && ft_strchr(set, s1[start]))
		start++;
	if (start == len)
		return (ft_strdup(""));
	end = len - 1;
	while (end > start && ft_strchr(set, s1[end]))
		end--;
	new = malloc(end - start + 2);
	if (!new)
		return (NULL);
	ft_memcpy(new, s1 + start, end - start + 1);
	new[end - start + 1] = '\0';
	return (new);
}
