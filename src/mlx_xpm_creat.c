/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mlx_xpm_creat.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vhovhann <vhovhann@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/18 17:39:44 by vhovhann          #+#    #+#             */
/*   Updated: 2023/06/20 19:51:26 by vhovhann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	xmp_creat(t_game *game)
{
	int	len;
	int	witdh;

	len = 64;
	witdh = 64;
	game->enemy = mlx_xpm_file_to_image(game->mlx, \
		"./xpm/akurka.xpm", &witdh, &len);
	image_animation(game, witdh, len);
	game->exit = mlx_xpm_file_to_image(game->mlx, \
		"./xpm/Girl.xpm", &witdh, &len);
	game->player = mlx_xpm_file_to_image(game->mlx, \
		"./xpm/gopota.xpm", &witdh, &len);
	game->tree = mlx_xpm_file_to_image(game->mlx, \
		"./xpm/tree.xpm", &witdh, &len);
	game->area = mlx_xpm_file_to_image(game->mlx, \
		"./xpm/pol.xpm", &witdh, &len);
}
