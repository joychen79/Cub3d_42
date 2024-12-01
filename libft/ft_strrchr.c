/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrimonte <rrimonte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/20 12:53:15 by rrimonte          #+#    #+#             */
/*   Updated: 2024/11/01 10:22:20 by rrimonte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int				len;
	unsigned char	search;

	search = (unsigned char)c;
	len = ft_strlen(s);
	while (len > 0 && s[len] != search)
		len--;
	if (s[len] == search)
		return ((char *)s + len);
	else
		return (NULL);
}
/*
int	main(void)
{
	const   char *s = "tripouille";
	//int     c = 65;

	printf("%s\n", strrchr(s, 't' + 256));
	printf("%s\n", ft_strrchr(s, 't' + 256));
	return (0);
}*/
