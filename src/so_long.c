/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vhovhann <vhovhann@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/15 13:23:17 by vhovhann          #+#    #+#             */
/*   Updated: 2023/06/21 13:47:39 by vhovhann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	main(int ac, char **av)
{
	int		fd;
	char	*res;
	char	*line;

	if (ac != 2)
		panic("Error Not Input File '.ber'\n");
	check_ber(av[1]);
	fd = open(av[1], O_RDONLY);
	if (fd == -1)
		panic("NO MAP\n");
	res = NULL;
	while (1)
	{
		line = get_next_line(fd);
		if (line == NULL)
			break ;
		res = ft_strjoin(res, line);
		free(line);
	}
	if (res == NULL)
		panic("Emap Map\n");
	main_2(res);
}

void	main_2(char *res)
{
	int		i;
	char	*trim;
	char	**str;
	t_game	map;

	trim = ft_strtrim(res, "\n");
	if (trim[0] == '\0')
		panic("Empty Map\n");
	i = -1;
	while (trim && trim[++i])
		if (trim[i] == '\n' && trim[i + 1] == '\n')
			panic("Error New Line\n");
	map.map = ft_split(trim, '\n');
	str = ft_split(trim, '\n');
	check_map(map.map);
	check_lenght(map.map);
	check_characters(map.map);
	check_valid(map.map, 0, 0, 0);
	map_coordinates(&map);
	player_coordinates(&map);
	coin_count(&map);
	free(trim);
	free(res);
	flood_fill(str, map.player_coordinates.x, map.player_coordinates.y);
	map_mlx(&map);
}
