/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   player_coordinates.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vhovhann <vhovhann@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/16 13:50:47 by vhovhann          #+#    #+#             */
/*   Updated: 2023/06/16 15:35:15 by vhovhann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

t_game	player_coordinates(char **str)
{
	int		i;
	int		j;
	t_game	player;

	i = 0;
	while (str && str[i])
	{
		j = 0;
		while (str[i][j])
		{
			if (str[i][j] == 'P')
			{
				player.player_coordinates.x = j;
				player.player_coordinates.y = i;
				break ;
			}
			j++;
		}
		i++;
	}
	return (player);
}