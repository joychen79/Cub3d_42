/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrimonte <rrimonte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/20 12:52:54 by rrimonte          #+#    #+#             */
/*   Updated: 2024/11/01 10:22:08 by rrimonte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;

	i = 0;
	if (dstsize == 0)
		return (ft_strlen(src));
	while (src[i] && i < dstsize - 1)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (ft_strlen(src));
}
/*
   int main(void)
   {
   char    *src = "abcdef";
   char    *dst;

   dst = strdup("ghijkl");
   printf("%s\n", src);
   printf("%s\n", dst);
   printf("%c\n", (int)strlcpy(dst, src, 5));
   printf("%s\n", src);
   printf("%s\n", dst);
   return (0);
   }*/
