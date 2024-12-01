/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrimonte <rrimonte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/20 12:51:30 by rrimonte          #+#    #+#             */
/*   Updated: 2024/11/01 10:21:22 by rrimonte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*p1;
	unsigned char	*p2;

	p1 = (unsigned char *)s1;
	p2 = (unsigned char *)s2;
	while (n > 0)
	{
		if (*p1 != *p2)
			return (*p1 - *p2);
		p1++;
		p2++;
		n--;
	}
	return (0);
}
/*
int	main(void)
{
	const char	*s1 = "sdsfds";
	const char	*s2 = "sddgdtre";
	
	printf("%d\n", memcmp((const void *)s1, (const void *)s2, 5));
        printf("%d\n", ft_memcmp((const void *)s1, (const void *)s2, 5));
	return (0);
}*/
