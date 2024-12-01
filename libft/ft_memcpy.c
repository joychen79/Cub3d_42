/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrimonte <rrimonte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/20 12:51:36 by rrimonte          #+#    #+#             */
/*   Updated: 2024/11/01 10:21:18 by rrimonte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t			i;
	const char		*src_cpy;
	unsigned char	*dst_cpy;

	src_cpy = src;
	dst_cpy = dst;
	i = 0;
	while (i < n)
	{
		dst_cpy[i] = src_cpy[i];
		i++;
	}
	return (dst);
}
/*
   int main(void)
   {
   char    *dst, *src;

   src = strdup("dsfsfsd");
   dst = strdup("dfzezarz");
   memcpy(dst, src, 5);
   printf("%s\n", dst);
   return (0);
   }
   */
