/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_coordinates.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vhovhann <vhovhann@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/16 15:09:18 by vhovhann          #+#    #+#             */
/*   Updated: 2023/06/16 18:33:11 by vhovhann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/so_long.h"

void	map_coordinates(char **str)
{
	t_game	map;
	int		i;
	int		j;

	i = 0;
	j = 0;
	if (str && str[i])
	{
		while (str[i])
			i++;
		map.map_size.y = i;
	}
	i = 0;
	if (str && str[i])
	{
		while (str[i][j])
			j++;
		map.map_size.x = j;
	}
}