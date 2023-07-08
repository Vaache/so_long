/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   flood_fill.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vhovhann <vhovhann@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/16 15:29:06 by vhovhann          #+#    #+#             */
/*   Updated: 2023/06/21 15:46:28 by vhovhann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	valid_flood_fill_map(char **map)
{
	int	i;
	int	j;

	i = 0;
	while (map[i])
	{
		j = 0;
		while (map[i][j])
		{
			if (map[i][j] == 'P' || map[i][j] == 'C')
				panic("Error: The Player Cannot Win\n");
			j++;
		}
		i++;
	}
	valid_flood_fill_map2(map);
}

void	valid_flood_fill_map2(char **str)
{
	int	i;
	int	j;

	i = 1;
	j = 1;
	while (str[i])
	{
		j = 1;
		while (str[i][j])
		{
			if (str[i][j] == 'E')
			{
				if (str[i + 1][j] != '-' && str[i - 1][j] != '-' &&
					str[i][j - 1] != '-' && str[i][j + 1] != '-')
					panic("Error: The Player Cannot Win\n");
			}
			j++;
		}
		i++;
	}
}

void	fill(char **str, int x, int y, char to_fill)
{
	if (x < 0 || y < 0 || (str[y][x] != 'C' \
		&& str[y][x] != '0' && str[y][x] != to_fill))
		return ;
	str[y][x] = '-';
	fill(str, x - 1, y, to_fill);
	fill(str, x + 1, y, to_fill);
	fill(str, x, y - 1, to_fill);
	fill(str, x, y + 1, to_fill);
}

void	flood_fill(char **str, int x, int y)
{
	int	i;

	i = 0;
	fill(str, x, y, str[y][x]);
	valid_flood_fill_map(str);
	while (str[i])
		i++;
	ft_free(str, i - 1);
}
