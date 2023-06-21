/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mlx_map_creat.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vhovhann <vhovhann@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/18 17:41:25 by vhovhann          #+#    #+#             */
/*   Updated: 2023/06/21 13:47:32 by vhovhann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

static void	map_create_2(t_game *game, int x, int y, void *rem)
{
	if (game->map[y][x] == '1')
		mlx_put_image_to_window(game->mlx, game->mlx_win, \
			game->tree, x * 64, y * 64);
	else if (game->map[y][x] == 'C')
		mlx_put_image_to_window(game->mlx, game->mlx_win, \
			rem, x * 64 + 10, y * 64);
	else if (game->map[y][x] == 'E')
		mlx_put_image_to_window(game->mlx, game->mlx_win, \
			game->exit, x * 64, y * 64);
	else if (game->map[y][x] == 'W')
		mlx_put_image_to_window(game->mlx, game->mlx_win, \
			game->enemy, x * 64, y * 64 + 18);
}

void	map_creat(t_game *game, void *rem)
{
	int	x;
	int	y;

	y = 0;
	while (game->map[y] != NULL)
	{
		x = 0;
		while (game->map[y][x] != '\0')
		{
			mlx_put_image_to_window(game->mlx, game->mlx_win, \
				game->area, x * 64, y * 64);
			if (game->map[y][x] == 'P')
				mlx_put_image_to_window(game->mlx, game->mlx_win, \
					game->player, x * 64, y * 64);
			map_create_2(game, x, y, rem);
			x++;
		}
		y++;
	}
}

void	image_animation(t_game *game, int witdh, int len)
{
	game->xpm = (void **)malloc(sizeof(void *) * 12);
	game->xpm[0] = mlx_xpm_file_to_image(game->mlx, \
		"./xpm/pivo.xpm", &witdh, &len);
	game->xpm[1] = mlx_xpm_file_to_image(game->mlx, \
		"./xpm/pivo1.xpm", &witdh, &len);
	game->xpm[2] = mlx_xpm_file_to_image(game->mlx, \
		"./xpm/pivo2.xpm", &witdh, &len);
	game->xpm[3] = mlx_xpm_file_to_image(game->mlx, \
		"./xpm/pivo3.xpm", &witdh, &len);
	game->xpm[4] = mlx_xpm_file_to_image(game->mlx, \
		"./xpm/pivo4.xpm", &witdh, &len);
	game->xpm[5] = mlx_xpm_file_to_image(game->mlx, \
		"./xpm/pivo5.xpm", &witdh, &len);
	game->xpm[6] = mlx_xpm_file_to_image(game->mlx, \
		"./xpm/pivo6.xpm", &witdh, &len);
	game->xpm[7] = mlx_xpm_file_to_image(game->mlx, \
		"./xpm/pivo7.xpm", &witdh, &len);
	game->xpm[8] = mlx_xpm_file_to_image(game->mlx, \
		"./xpm/pivo8.xpm", &witdh, &len);
	game->xpm[9] = mlx_xpm_file_to_image(game->mlx, \
		"./xpm/pivo9.xpm", &witdh, &len);
	game->xpm[10] = mlx_xpm_file_to_image(game->mlx, \
		"./xpm/pivo10.xpm", &witdh, &len);
	game->xpm[11] = mlx_xpm_file_to_image(game->mlx, \
		"./xpm/pivo11.xpm", &witdh, &len);
}
