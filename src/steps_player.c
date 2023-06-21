/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   steps_player.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vhovhann <vhovhann@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/19 18:00:14 by vhovhann          #+#    #+#             */
/*   Updated: 2023/06/21 11:28:03 by vhovhann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	press_w(t_game *game, int x, int y)
{
	if (game->map[y - 1][x] != '1')
	{
		if (game->map[y - 1][x] == 'W')
			exit_game(2, game);
		else if (game->map[y - 1][x] == 'C')
		{
			game->map[y - 1][x] = 'P';
			help(game, x, y);
			game->player_coordinates.y--;
		}
		else if (game->map[y - 1][x] == 'E' && game->ccoin != 0)
		{
				game->map[y - 1][x] = 'E';
				game->map[y][x] = 'P';
		}
		else if (game->map[y - 1][x] == 'E' && game->ccoin == 0)
			exit_game(1, game);
		else
		{
			game->map[y - 1][x] = 'P';
			game->map[y][x] = '0';
			game->steps++;
			game->player_coordinates.y--;
		}
	}
}

void	press_a(t_game *game, int x, int y)
{
	if (game->map[y][x - 1] != '1')
	{
		if (game->map[y][x - 1] == 'W')
			exit_game(2, game);
		else if (game->map[y][x - 1] == 'C')
		{
			game->map[y][x - 1] = 'P';
			help(game, x, y);
			game->player_coordinates.x--;
		}
		else if (game->map[y][x - 1] == 'E' && game->ccoin != 0)
		{
				game->map[y][x - 1] = 'E';
				game->map[y][x] = 'P';
		}
		else if (game->map[y][x - 1] == 'E' && game->ccoin == 0)
			exit_game(1, game);
		else
		{
			game->map[y][x - 1] = 'P';
			game->map[y][x] = '0';
			game->steps++;
			game->player_coordinates.x--;
		}
	}
}

void	press_s(t_game *game, int x, int y)
{
	if (game->map[y + 1][x] != '1')
	{
		if (game->map[y + 1][x] == 'W')
			exit_game(2, game);
		else if (game->map[y + 1][x] == 'C')
		{
			game->map[y + 1][x] = 'P';
			help(game, x, y);
			game->player_coordinates.y++;
		}
		else if (game->map[y + 1][x] == 'E' && game->ccoin != 0)
		{	
			game->map[y + 1][x] = 'E';
			game->map[y][x] = 'P';
		}
		else if (game->map[y + 1][x] == 'E' && game->ccoin == 0)
			exit_game(1, game);
		else
		{
			game->map[y + 1][x] = 'P';
			game->map[y][x] = '0';
			game->steps++;
			game->player_coordinates.y++;
		}
	}
}

void	press_d(t_game *game, int x, int y)
{
	if (game->map[y][x + 1] != '1')
	{
		if (game->map[y][x + 1] == 'W')
			exit_game(2, game);
		else if (game->map[y][x + 1] == 'C')
		{
			game->map[y][x + 1] = 'P';
			help(game, x, y);
			game->player_coordinates.x++;
		}
		else if (game->map[y][x + 1] == 'E' && game->ccoin != 0)
		{
				game->map[y][x + 1] = 'E';
				game->map[y][x] = 'P';
		}
		else if (game->map[y][x + 1] == 'E' && game->ccoin == 0)
			exit_game(1, game);
		else
		{
			game->map[y][x + 1] = 'P';
			game->map[y][x] = '0';
			game->steps++;
			game->player_coordinates.x++;
		}
	}
}

void	press_esc(t_game *game)
{
	exit_game(-1, game);
}
