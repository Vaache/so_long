/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mlx_start.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vhovhann <vhovhann@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/18 16:08:58 by vhovhann          #+#    #+#             */
/*   Updated: 2023/06/21 13:47:05 by vhovhann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	mlx_keypress(int keypress, t_game *game)
{
	if (keypress == W || keypress == UP)
		press_w(game, game->player_coordinates.x, \
		game->player_coordinates.y);
	if (keypress == A || keypress == LEFT)
		press_a(game, game->player_coordinates.x, \
		game->player_coordinates.y);
	if (keypress == S || keypress == DOWN)
		press_s(game, game->player_coordinates.x, \
		game->player_coordinates.y);
	if (keypress == D || keypress == RIGHT)
		press_d(game, game->player_coordinates.x, \
			game->player_coordinates.y);
	if (keypress == ESC)
		press_esc(game);
	return (0);
}

int	close_window(t_game *game)
{
	exit_game(-1, game);
	return (0);
}

void	map_mlx(t_game *game)
{
	game->steps = 0;
	game->mlx = mlx_init();
	game->mlx_win = mlx_new_window(game->mlx, game->map_size.x * 64, \
		game->map_size.y * 64, "SO_LONG");
	xmp_creat(game);
	mlx_hook(game->mlx_win, 2, 0, &mlx_keypress, game);
	mlx_loop_hook(game->mlx, &frame, game);
	mlx_hook(game->mlx_win, 17, 0, &close_window, game);
	mlx_loop(game->mlx);
}
