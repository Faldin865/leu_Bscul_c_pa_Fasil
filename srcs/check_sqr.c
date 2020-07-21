/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_sqr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpaul <gpaul@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/21 12:22:32 by gpaul             #+#    #+#             */
/*   Updated: 2020/07/21 14:23:42 by gpaul            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int				init_struct(void)
{
	t_temp_sqr	*temp_square;
	t_map_print	*square;

	if ((temp_square = malloc(sizeof(t_temp_sqr) * 1)) == NULL)
		return (-1);
	if ((square = malloc(sizeof(t_map_print) * 1)) == NULL)
		return (-1);
	return (0);
}

t_temp_sqr		*temp_bsq(t_temp_sqr *temp_square, t_map_param *param,
				char **map)
{
	int		y;
	int		x;
	int		n_y;
	int		i_x;

	n_y = 1;
	i_x = 1;
	y = temp_square->start_y;
	x = temp_square->start_x;
	while (map[y][x])
	{
		while (map[y][x + i_x] == param->c_pot && map[y + n_y][x] == param->c_pot)
		{
			if(map[y + n_y][x + i_x] == param->c_pot)
			{
				n_y++;
				i_x++;
			}
			else
			{
				temp_square->end_x = x + i_x;
				temp_square->end_y = y + n_y;
				temp_square->size_sqr = (x - i_x) * (y - n_y);
			}
			
		}
		if 
	}
	return (temp_square);
}

t_map_print		*find_bsq(t_temp_sqr *temp_square,
				t_map_print *square, t_map_param *param, char **map)
{
	int		y;
	int		x;

	while (map[y])
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
	return (square);
}
