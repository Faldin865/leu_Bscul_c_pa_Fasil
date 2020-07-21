/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_sqr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpaul <gpaul@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/21 12:22:32 by gpaul             #+#    #+#             */
/*   Updated: 2020/07/21 18:17:20 by gpaul            ###   ########.fr       */
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

	y = temp_square->start_y;
	x = temp_square->start_x;
	i_x = x;
	n_y = y;
	while (map[n_y][i_x] && map[n_y][i_x] == param->c_pot)
	{
		while (y <= n_y)
		{
			while (x <= i_x)
			{
				if (map[y][x] != param->c_pot)
					return (temp_fill(temp_square, n_y, i_x));
				else
					x++;
			}
			x = temp_square->start_x;
			y++;
		}
		y = temp_square->start_y;
		i_x++;
		n_y++;
	}
	temp_square->end_x = i_x;
	temp_square->end_y = n_y;
	temp_square->size_sqr = (x - i_x) * (y - n_y);
	return (temp_square);
}

char		**find_bsq(t_temp_sqr *temp_square,
		t_map_print *square, t_map_param *param, char **map)
{
	int		y;
	int		x;

	y = 1;
	x = 0;
	if (init_struct() == -1)
		return (NULL);
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
					square = temp_to_square(temp_square, square);
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
