/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uardaozdes <uardaozdes@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/03 11:45:23 by uardaozdes        #+#    #+#             */
/*   Updated: 2025/06/03 13:31:57 by uardaozdes       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count(const char *s, char c)
{
	size_t	count;
	size_t	i;

	count = 0;
	i = 0;
	while (s[i])
	{
		while (s[i] && s[i] == c)
			i++;
		if (s[i] && s[i] != c)
		{
			count++;
			while (s[i] && s[i] != c)
				i++;
		}
	}
	return (count);
}

static int	word_len(const char *s, char c)
{
	size_t	len;

	len = 0;
	while (s[len] && s[len] != c)
		len++;
	return (len);
}

static void	free_all(char **arr)
{
	size_t	i;

	i = 0;
	while (arr[i])
		free(arr[i++]);
	free(arr);
}

static int	fill_word(char **res, const char **s, char c, size_t i)
{
	size_t	len;
	size_t	j;

	len = word_len(*s, c);
	res[i] = malloc(len + 1);
	if (!res[i])
		return (0);
	j = 0;
	while (j < len)
		res[i][j++] = *(*s)++;
	res[i][j] = '\0';
	return (1);
}

char	**ft_split(char const *s, char c)
{
	char	**res;
	size_t	i;
	size_t	word;

	if (!s)
		return (NULL);
	word = ft_count(s, c);
	res = malloc(sizeof(char *) * (word + 1));
	if (!res)
		return (NULL);
	i = 0;
	while (*s && i < word)
	{
		while (*s == c)
			s++;
		if (*s && !fill_word(res, &s, c, i++))
			return (free_all(res), NULL);
	}
	res[i] = NULL;
	return (res);
}
