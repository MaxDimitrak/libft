/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bghost <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 17:17:37 by bghost            #+#    #+#             */
/*   Updated: 2021/10/04 17:17:39 by bghost           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	*dell_mass(char **mass)
{
	int	i;

	i = 0;
	while (mass[i] == NULL)
	{
		free(mass[i]);
		i++;
	}
	free(mass);
	return (NULL);
}

static size_t	words_counter(char const *s, char c)
{
	size_t	words;
	size_t	i;

	words = 0;
	i = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i])
		{
			words++;
			while (s[i] && s[i] != c)
				i++;
		}
	}	
	return (words);
}

static char	*word_alloc(char const *s, char c)
{
	char	*s_alloc;
	size_t	i;

	i = 0;
	while (s[i] && s[i] != c)
		i++;
	s_alloc = (char *)malloc(sizeof(s[i]) * (i + 1));
	if (!s_alloc)
		return (NULL);
	i = 0;
	while (s[i] && s[i] != c)
	{
		s_alloc[i] = s[i];
		i++;
	}
	s_alloc[i] = '\0';
	return (s_alloc);
}

char	**ft_split(char const *s, char c)
{
	char	**sep_words;
	size_t	i;

	i = 0;
	sep_words = (char **)malloc(sizeof(char *) * (words_counter(s, c) + 1));
	if (!sep_words)
		return (NULL);
	while (*s)
	{
		while (*s && *s == c)
			s++;
		if (*s && *s != c)
		{
			sep_words[i] = word_alloc(s, c);
			if (sep_words[i] == NULL)
				return (dell_mass(sep_words));
			i++;
			while (*s && *s != c)
				s++;
		}
	}
	sep_words[i] = NULL;
	return (sep_words);
}
