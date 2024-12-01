/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrimonte <rrimonte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/20 12:50:33 by rrimonte          #+#    #+#             */
/*   Updated: 2024/11/01 10:20:48 by rrimonte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft.h"

static int	ft_size(long int nbr)
{
	int	size;

	size = 0;
	if (nbr == 0)
	{
		size = 1;
		return (size);
	}
	if (nbr < 0)
	{
		size++;
		nbr = nbr * -1;
	}
	while (nbr > 0)
	{
		size++;
		nbr = nbr / 10;
	}
	return (size);
}

char	*ft_itoa(int n)
{
	char			*str;
	long int		nbr;
	int				size;

	nbr = n;
	size = ft_size(nbr);
	str = ft_calloc(sizeof(char), size + 1);
	if (str == NULL)
		return (NULL);
	size--;
	if (nbr == 0)
		str[0] = '0';
	if (nbr < 0)
	{
		str[0] = '-';
		nbr = nbr * -1;
	}
	while (nbr > 0)
	{
		str[size] = (nbr % 10) + 48;
		nbr = nbr / 10;
		size--;
	}
	return (str);
}
/*
int	main(void)
{
	char    *str;

	str = ft_itoa(1245);
	printf("%s\n", str);
	free(str);
	return (0);
}*/
