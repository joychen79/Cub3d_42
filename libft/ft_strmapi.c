/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrimonte <rrimonte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/20 12:53:02 by rrimonte          #+#    #+#             */
/*   Updated: 2024/11/01 10:22:13 by rrimonte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft.h"

/*
char	ft_antoine(unsigned int antoine, char c)
{
	c = c + antoine;
	return (c);
}
*/

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*map;

	i = 0;
	map = ft_calloc(ft_strlen(s) + 1, sizeof(char));
	if (map == NULL)
		return (NULL);
	while (i < ft_strlen(s))
	{
		map[i] = (*f)(i, s[i]);
		i++;
	}
	return (map);
}
/*
int	main(void)
{
	char	*s = "abcd";
	printf("%s\n", ft_strmapi(s, &ft_antoine));
	return  (0);
}
*/
