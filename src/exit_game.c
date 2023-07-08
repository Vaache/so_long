/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   exit_game.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vhovhann <vhovhann@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/19 18:12:30 by vhovhann          #+#    #+#             */
/*   Updated: 2023/06/21 17:14:06 by vhovhann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	exit_game(int i, t_game *game)
{
	if (i == -1)
		write(1, QUIT, ft_strlen(QUIT));
	if (i == 1)
		write(1, WIN, ft_strlen(WIN));
	if (i == 2)
		write(1, GO, ft_strlen(GO));
	mlx_destroy_image(game->mlx, game->enemy);
	mlx_destroy_image(game->mlx, game->area);
	mlx_destroy_image(game->mlx, game->player);
	game->images = 11;
	while (game->images >= 0)
	{
		mlx_destroy_image(game->mlx, game->xpm[game->images]);
		game->images--;
	}
	free(game->xpm);
	mlx_destroy_image(game->mlx, game->tree);
	mlx_destroy_image(game->mlx, game->exit);
	mlx_destroy_window(game->mlx, game->mlx_win);
	ft_free(game->map, game->map_size.y);
	exit(0);
}
