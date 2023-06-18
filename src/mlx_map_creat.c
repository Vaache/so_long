/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mlx_map_creat.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vhovhann <vhovhann@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/18 17:41:25 by vhovhann          #+#    #+#             */
/*   Updated: 2023/06/18 18:35:26 by vhovhann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	map_creat(t_game *game)
{
	int	x;
	int	y;

	y = 0;
	while (game->map[y] != NULL)
	{
		x = 0;
		while (game->map[y][x] != '\0')
		{
			mlx_put_image_to_window(game->mlx, game->mlx_win, game->area, x * 64, y * 64);
			if (game->map[y][x] == 'P')
				mlx_put_image_to_window(game->mlx, game->mlx_win, game->player, x * 64, y * 64);
			else if (game->map[y][x] == '1')
				mlx_put_image_to_window(game->mlx, game->mlx_win, game->tree, x * 64, y * 64);
			else if (game->map[y][x] == 'C')
				mlx_put_image_to_window(game->mlx, game->mlx_win, game->coin, x * 64, y * 64);
			else if (game->map[y][x] == 'E')
				mlx_put_image_to_window(game->mlx, game->mlx_win, game->exit, x * 64, y * 64);
			x++;
		}
		y++;
	}
}