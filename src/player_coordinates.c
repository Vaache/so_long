/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   player_coordinates.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vhovhann <vhovhann@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/16 13:50:47 by vhovhann          #+#    #+#             */
/*   Updated: 2023/06/20 21:22:24 by vhovhann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	player_coordinates(t_game *player)
{
	int		i;
	int		j;

	i = 0;
	while (player->map && player->map[i])
	{
		j = 0;
		while (player->map[i][j])
		{
			if (player->map[i][j] == 'P')
			{
				player->player_coordinates.x = j;
				player->player_coordinates.y = i;
				break ;
			}
			j++;
		}
		i++;
	}
}
