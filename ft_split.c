/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hahabib <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/26 18:52:57 by hahabib           #+#    #+#             */
/*   Updated: 2026/01/12 17:12:09 by hahabib          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count(char const *s, char c)
{
	int	i;
	int	words;

	i = 0;
	words = 0;
	while (s[i])
	{
		while (s[i] && s[i] == c)
			i++;
		if (s[i] && s[i] != c)
		{
			words++;
			while (s[i] && s[i] != c)
				i++;
		}
	}
	return (words);
}

static char	*create_word(const char *s, int start, int len)
{
	char	*word;
	int		i;

	word = malloc(len + 1);
	if (!word)
		return (NULL);
	i = 0;
	while (i < len)
	{
		word[i] = s[start + i];
		i++;
	}
	word[i] = '\0';
	return (word);
}

static int	word_len(char const *s, char c, int start)
{
	int	len;

	len = 0;
	while (s[start + len] && s[start + len] != c)
		len++;
	return (len);
}

static int	split_words(const char *s, char c, char **res)
{
	int	i;
	int	w;
	int	len;

	i = 0;
	w = 0;
	while (s[i])
	{
		while (s[i] && s[i] == c)
			i++;
		if (s[i])
		{
			len = word_len(s, c, i);
			res[w] = create_word(s, i, len);
			if (!res[w])
				return (0);
			i += len;
			w++;
		}
	}
	res[w] = NULL;
	return (1);
}

char	**ft_split(char const *s, char c)
{
	char	**result;
	int		fail;
	int		i;

	if (!s)
		return (NULL);
	result = malloc((count(s, c) + 1) * sizeof(char *));
	if (!result)
		return (NULL);
	fail = split_words(s, c, result);
	if (!fail)
	{
		i = 0;
		while (result[i])
			free(result[i++]);
		free(result);
		return (NULL);
	}
	return (result);
}
