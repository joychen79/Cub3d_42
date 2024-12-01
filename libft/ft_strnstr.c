/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrimonte <rrimonte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/20 12:53:10 by rrimonte          #+#    #+#             */
/*   Updated: 2024/11/01 10:22:18 by rrimonte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;

	i = 0;
	if (*little == '\0')
		return ((char *)big);
	while (big[i] && i < len)
	{
		if (big[i] == *little)
		{
			if (ft_strncmp(big + i, little, ft_strlen(little)) == 0
				&& ft_strlen(little) + i <= len)
				return ((char *)big + i);
		}
		i++;
	}
	return (0);
}
/*
int	main(void)
{
	const char *l = "aaabcabcd";
	const char *s = "cd";
	char *ptr;

	ptr = ft_strnstr(l, s, 9);
	printf("%s\n", ptr);
	return (0);
}*/
