/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrimonte <rrimonte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/20 11:58:02 by rrimonte          #+#    #+#             */
/*   Updated: 2024/11/01 10:19:33 by rrimonte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/cub3d.h"

int	get_color(t_map *map, int x, int y, int i)
{
	return (*(int *)(map->img[i].addr
		+ (y * map->img[i].line_len + x * (map->img[i].bpp / 8))));
}
