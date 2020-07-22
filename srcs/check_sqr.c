/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_sqr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpaul <gpaul@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/21 12:22:32 by gpaul             #+#    #+#             */
/*   Updated: 2020/07/22 10:58:45 by gpaul            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

t_temp_sqr	*temp_bsq(t_temp_sqr *temp_square, t_map_param *param, char **map)
{
	int		y;
	int		x;
	int		y_n;
	int		x_i;

	y = temp_square->start_y;
	x = temp_square->start_x;
	x_i = 0;
	y_n = 1;
	while (map[y][x]&& y <= param->size_y)
	{
		while (x <= len)
		{
			if (map[y][x] && map[y][x] != c_pot)
			{
				return ();
			}
			else
				x++;
		}
		x = temp_square->start_x;
		y++;
	}
	return (t_temp_sqr);
}

char		**find_bsq(t_temp_sqr *temp_square,
		t_map_print *square, t_map_param *param, char **map)
{
	int		y;
	int		x;

	y = 1;
	x = 0;
	while (y <= param->size_y)
	{
		while (map[y][x])
		{
			if (map[y][x] == param->c_pot)
			{
				temp_square->start_x = x;
				temp_square->start_y = y;
				temp_square = temp_bsq(temp_square, param, map);
				if (square->size_sqr < temp_square->size_sqr)
				{
					square->size_sqr = temp_square->size_sqr;
					square->start_y = temp_square->start_y;
					square->start_x = temp_square->start_x;
					square->end_y = temp_square->end_y;
					square->end_x = temp_square->end_x;
				}
			}
			x++;
		}
		x = 0;
		y++;
	}
	return (map_print(square, map, param));
}

char	**map_print(t_map_print *square, char **map, t_map_param *param)
{
	int		y;
	int		x;

	x = square->start_x;
	y = square->start_y;
	while (y <= square->end_y)
	{
		while (x <= square->end_x)
		{
			map[y][x] = param->filler;
			x++;
		}
		x = square->start_x;
		y++;
	}
	return (map);
}
