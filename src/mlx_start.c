/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mlx_start.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vhovhann <vhovhann@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/18 16:08:58 by vhovhann          #+#    #+#             */
/*   Updated: 2023/06/18 18:11:20 by vhovhann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	map_mlx(t_game *game)
{
	game->mlx = mlx_init();
	game->mlx_win = mlx_new_window(game->mlx, game->map_size.x * 64, game->map_size.y * 64, "SO_LONG");
	xmp_creat(game);
	map_creat(game);
	mlx_loop(game->mlx);
}