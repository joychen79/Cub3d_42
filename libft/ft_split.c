/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrimonte <rrimonte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/20 12:52:26 by rrimonte          #+#    #+#             */
/*   Updated: 2024/11/01 10:21:52 by rrimonte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft.h"

static int	ft_count(char const *s, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (s[i] != '\0')
	{
		while (s[i] && s[i] == c)
			i++;
		if (s[i] && s[i] != c)
			count++;
		while (s[i] && s[i] != c)
			i++;
	}
	return (count);
}

static char	*ft_word(char const *s, char c)
{
	int		i;
	int		size;
	char	*word;

	i = 0;
	size = 0;
	while (s[size] && s[size] != c)
		size++;
	word = ft_calloc(sizeof(char), size + 1);
	if (word == NULL)
		return (NULL);
	while (i < size)
	{
		word[i] = s[i];
		i++;
	}
	return (word);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		count;
	char	**tab;

	i = 0;
	count = ft_count(s, c);
	tab = ft_calloc(sizeof(char *), count + 1);
	if (tab == NULL)
		return (NULL);
	while (*s)
	{
		while (*s && *s == c)
			s++;
		if (*s && *s != c)
		{
			tab[i] = ft_word(s, c);
			i++;
		}
		while (*s && *s != c)
			s++;
	}
	return (tab);
}
/*
int	main(int argc, char ** argv)
{
	int	i;
	char	**tab;

	tab = ft_split(argv[1], '/');
	i = 0;
	while (tab[i])
	{
		printf("%s\n", tab[i]);
		i++;
	}
	i = 0;
	while (i < argc)
	{
		free(tab[i]);
		i++;
	}
	free(tab);
	return (0);
}*/
