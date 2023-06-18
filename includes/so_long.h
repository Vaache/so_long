/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vhovhann <vhovhann@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/15 13:22:05 by vhovhann          #+#    #+#             */
/*   Updated: 2023/06/18 18:35:10 by vhovhann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_H
# define SO_LONG_H

# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include <errno.h>
# include <string.h>
# include <fcntl.h>
# include <mlx.h>
# include "get_next_line_bonus.h"

typedef struct s_coordinates
{
	int	x;
	int	y;
}	t_coordinates;

typedef struct s_game
{
	void			*player;
	void			*exit;
	void			*coin;
	void			*tree;
	void			*area;
	char			**map;
	void			*mlx;
	void			*mlx_win;
	t_coordinates	map_size;
	t_coordinates	player_coordinates;
}	t_game;

void	main_2(char *res);
void	main_3(t_game map, char **str);

int		ft_strcmp(char *s1, char *s2);
char	**ft_split(const char *s, char c);
char	*ft_strtrim(char *s1, char *set);

void	check_ber(char *str);
void	check_map(char **str);
void	check_lenght(char **str);
void	check_characters(char **str);
void	check_valid(char **str);

void	player_coordinates(t_game *game);
void	map_coordinates(t_game *game);

void	flood_fill(char **str, int x, int y);
void	valid_flood_fill_map(char **map);


void	map_mlx(t_game *map);
void	xmp_creat(t_game *game);
void	map_creat(t_game *game);

void	panic(char *str);
void	ft_free(char **s);

#endif