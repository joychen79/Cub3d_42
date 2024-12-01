/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   key_events.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrimonte <rrimonte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/20 12:13:17 by rrimonte          #+#    #+#             */
/*   Updated: 2024/11/01 10:17:06 by rrimonte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/cub3d.h"

int	key_hook(int keycode, t_map *map)
{
	if (keycode == KEY_ESC)
		close_game(map);
	else if (keycode == KEY_W)
		move(map, map->dir_x * map->speed, map->dir_y * map->speed, '+');
	else if (keycode == KEY_S)
		move(map, map->dir_x * map->speed, map->dir_y * map->speed, '-');
	else if (keycode == KEY_A)
		move(map, map->plane_x * map->speed, map->plane_y * map->speed, '-');
	else if (keycode == KEY_D)
		move(map, map->plane_x * map->speed, map->plane_y * map->speed, '+');
	else if ((keycode == KEY_L && (map->p_dir == 'N' || map->p_dir == 'S'))
		|| (keycode == KEY_R && (map->p_dir == 'E' || map->p_dir == 'W')))
		rotate(map, -map->rot_speed);
	else if ((keycode == KEY_L && (map->p_dir == 'E' || map->p_dir == 'W'))
		|| (keycode == KEY_R && (map->p_dir == 'N' || map->p_dir == 'S')))
		rotate(map, map->rot_speed);
	return (0);
}
