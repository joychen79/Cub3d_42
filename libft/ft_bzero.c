/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrimonte <rrimonte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/20 12:49:43 by rrimonte          #+#    #+#             */
/*   Updated: 2024/11/01 10:20:27 by rrimonte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t	i;
	char	*str;

	str = s;
	i = 0;
	while (i < n)
	{
		str[i] = '\0';
		i++;
	}
}
/*
   int main(void)
   {
   char    *str;
   str = strdup("Hello");
   printf("%s\n", str);
   ft_bzero(str, 2);
   printf("%s\n", str + 2);
   return (0);
   }
   */
