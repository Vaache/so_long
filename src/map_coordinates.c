/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_coordinates.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vhovhann <vhovhann@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/16 15:09:18 by vhovhann          #+#    #+#             */
/*   Updated: 2023/06/21 14:39:25 by vhovhann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/so_long.h"

void	map_coordinates(t_game *map)
{
	int		i;
	int		j;

	i = 0;
	j = 0;
	if (map->map && map->map[i])
	{
		while (map->map[i])
			i++;
		map->map_size.y = i;
	}
	i = 0;
	if (map->map && map->map[i])
	{
		while (map->map[i][j])
			j++;
		map->map_size.x = j;
	}
	if (map->map_size.y > 17)
		panic("Error: Large Map\n");
	if (map->map_size.x > 32)
		panic("Error: Large Map\n");
}
