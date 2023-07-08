/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vhovhann <vhovhann@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/15 13:22:05 by vhovhann          #+#    #+#             */
/*   Updated: 2023/06/21 15:43:15 by vhovhann         ###   ########.fr       */
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

# define W 		13
# define A 		0
# define S 		1
# define D 		2
# define UP		126
# define DOWN	125
# define LEFT	123
# define RIGHT	124
# define ESC	53
# define WIN	"You Win\n"
# define GO		"Game Over\n"
# define QUIT	"Quit\n"

typedef struct s_coordinates
{
	int	x;
	int	y;
}	t_coordinates;

typedef struct s_game
{
	void			*enemy;
	void			*player;
	void			*exit;
	void			*coin;
	void			*tree;
	void			*area;
	void			*mlx;
	void			*mlx_win;
	char			**map;
	int				ccoin;
	void			**xpm;
	int				images;
	unsigned int	steps;
	t_coordinates	map_size;
	t_coordinates	player_coordinates;
}	t_game;

void	main_2(char *res);
void	main_3(t_game map, char **str);

int		ft_strcmp(char *s1, char *s2);
char	**ft_split(const char *s, char c);
char	*ft_strtrim(char *s1, char *set);
char	*ft_itoa(int n);
void	help(t_game *game, int x, int y);

void	check_ber(char *str);
void	check_map(char **str);
void	check_lenght(char **str);
void	check_characters(char **str);
void	check_valid(char **str, int player, int exit, int coin);

void	player_coordinates(t_game *game);
void	map_coordinates(t_game *game);
void	coin_count(t_game *game);

void	flood_fill(char **str, int x, int y);
void	valid_flood_fill_map(char **map);
void	valid_flood_fill_map2(char **map);

void	map_mlx(t_game *map);
void	xmp_creat(t_game *game);
void	map_creat(t_game *game, void *rem);
void	image_animation(t_game *game, int witdh, int len);
void	*coin_animation(t_game *game);
int		frame(t_game *game);

void	press_w(t_game *game, int x, int y);
void	press_a(t_game *game, int x, int y);
void	press_s(t_game *game, int x, int y);
void	press_d(t_game *game, int x, int y);
void	press_esc(t_game *game);

void	panic(char *str);
void	exit_game(int i, t_game *game);
void	ft_free(char **s, int i);

#endif