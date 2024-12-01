/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrimonte <rrimonte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/20 12:49:59 by rrimonte          #+#    #+#             */
/*   Updated: 2024/11/01 10:20:34 by rrimonte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft.h"

int	ft_isalnum(int c)
{
	if ((c >= 97 && c <= 122)
		|| (c >= 65 && c <= 90)
		|| (c >= 48 && c <= 57))
		return (1);
	else
		return (0);
}
/*
   int main(void)
   {
   int    c = '9';

   printf("%d\n", ft_isalnum(c));
   printf("%d\n", isalnum(c));
   return (0);
   }
   */
