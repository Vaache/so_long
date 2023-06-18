/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pars.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vhovhann <vhovhann@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/15 13:25:33 by vhovhann          #+#    #+#             */
/*   Updated: 2023/06/16 14:16:51 by vhovhann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	check_ber(char *str)
{
	int	i;

	i = 0;
	while (str && str[i])
		i++;
	while (i >= 0)
	{
		if (str[i] == '.')
			break ;
		i--;
	}
	if (ft_strcmp(&str[i], ".ber") != 0)
		panic("Error\n");
}

void	check_map(char **str)
{
	int	i;
	int	j;

	i = 0;
	while (str && str[i])
	{
		j = -1;
		if (i == 0 || str[i + 1] == NULL)
			while (str[i][++j])
				if (str[i][j] != '1')
					panic("Error\n");
		if (str[i][0] != '1' || str[i][ft_strlen(str[i]) - 1] != '1')
			panic("Error\n");
		i++;
	}
}

void	check_lenght(char **str)
{
	int	i;

	i = 0;
	while (str && str[i] && str[i + 1])
	{
		if (ft_strlen(str[i]) != ft_strlen(str[i + 1]))
			panic("Error\n");
		i++;
	}
}

void	check_characters(char **str)
{
	int	i;
	int	j;

	i = 1;
	while (str && str[i])
	{
		j = 1;
		while (str[i][j])
		{
			if (str[i][j] != '1' && str[i][j] != '0' \
				&& str[i][j] != 'C' && str[i][j] != 'E' && str[i][j] != 'P')
				panic("Error\n");
			j++;
		}
		i++;
		if (str[i + 1] == NULL)
			break ;
	}
}

void	check_valid(char **str)
{
	int	i;
	int	j;
	int	player;
	int	exit;
	int	coin;

	i = 0;
	player = 0;
	exit = 0;
	coin = 0;
	while (str && str[++i])
	{
		j = 0;
		while (str[i][++j])
		{
			if (str[i][j] == 'C')
				coin++;
			else if (str[i][j] == 'P')
				player++;
			else if (str[i][j] == 'E')
				exit++;
		}
	}
	if (coin == 0 || player != 1 || exit != 1)
		panic("Error\n");
}
