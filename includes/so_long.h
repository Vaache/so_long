/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vhovhann <vhovhann@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/15 13:22:05 by vhovhann          #+#    #+#             */
/*   Updated: 2023/06/16 19:37:46 by vhovhann         ###   ########.fr       */
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
	void			*wall;
	void			*area;
	t_coordinates	map_size;
	t_coordinates	player_coordinates;
}	t_game;

void	main_2(char *res);
void	main_3(char **map);

int		ft_strcmp(char *s1, char *s2);
char	**ft_split(const char *s, char c);
char	*ft_strtrim(char *s1, char *set);
void	check_ber(char *str);
void	check_map(char **str);
void	check_lenght(char **str);
void	check_characters(char **str);
void	check_valid(char **str);
t_game	player_coordinates(char **str);
void	map_coordinates(char **str);
void	flood_fill(char **str);
void	valid_flood_fill_map(char **map);

void	panic(char *str);
void	ft_free(char **s);

#endif