/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrimonte <rrimonte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/20 12:52:33 by rrimonte          #+#    #+#             */
/*   Updated: 2024/11/01 10:21:57 by rrimonte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft.h"

char	*ft_strchr(const char *s, int c)
{
	int				i;
	unsigned char	search;

	search = (unsigned char)c;
	i = 0;
	while (s[i] && s[i] != search)
		i++;
	if (s[i] == search)
		return ((char *)s + i);
	else
		return (NULL);
}

/*
int	main(void)
{
	const	char *s = "abcdABCD0123";
	int	c = '0';

	printf("%s\n", ft_strchr(s, c));
	printf("%s\n", strchr(s, c));
	return (0);
}
*/
