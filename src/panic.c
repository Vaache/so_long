/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   panic.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vhovhann <vhovhann@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/15 15:54:58 by vhovhann          #+#    #+#             */
/*   Updated: 2023/06/22 19:00:59 by vhovhann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	panic(char *str)
{
	write(2, str, ft_strlen(str));
	exit(EXIT_FAILURE);
}
