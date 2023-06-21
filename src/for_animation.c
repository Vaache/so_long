/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   for_animation.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vhovhann <vhovhann@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/20 15:46:38 by vhovhann          #+#    #+#             */
/*   Updated: 2023/06/21 13:45:23 by vhovhann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	*coin_animation(t_game *game)
{
	static int	i = 0;
	static void	*rem;

	if (i % 15 == 0)
		rem = game->xpm[0];
	if (i % 30 == 0)
		rem = game->xpm[1];
	if (i % 45 == 0)
		rem = game->xpm[2];
	if (i % 60 == 0)
		rem = game->xpm[3];
	if (i % 75 == 0)
		rem = game->xpm[4];
	if (i % 90 == 0)
		rem = game->xpm[5];
	if (i % 105 == 0)
		rem = game->xpm[6];
	if (i % 120 == 0)
		rem = game->xpm[7];
	if (i % 135 == 0)
		rem = game->xpm[8];
	if (i % 150 == 0)
		rem = game->xpm[9];
	i++;
	return (rem);
}

int	frame(t_game *game)
{
	void	*rem;
	char	*ptr;

	rem = coin_animation(game);
	ptr = ft_itoa(game->steps);
	mlx_clear_window(game->mlx, game->mlx_win);
	map_creat(game, rem);
	mlx_string_put(game->mlx, game->mlx_win, 5, 5, \
		0xFFFFFF, ptr);
	free(ptr);
	return (0);
}
