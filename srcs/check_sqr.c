/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_sqr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpaul <gpaul@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/21 12:22:32 by gpaul             #+#    #+#             */
/*   Updated: 2020/07/21 21:13:34 by gpaul            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

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
			while (map[y][x])
			{
				//printf("SWAG3\n");
				if (map[y][x] && map[y][x] != param->c_pot)
				{
					//printf("SWAGYOLO\n");
					temp_square->end_x = i_x;
					temp_square->end_y = n_y - 1;
					temp_square->size_sqr = ((i_x + 1) - (temp_square->start_x + 1) + 1) * ((n_y - (temp_square->start_y + 1))) + 1;
					//printf("SWAGYOLO\n");
					//if (temp_square->size_sqr == 9)
						//printf("size_sqr == %d\nstart_y == %d\nstart_x == %d\nend_y == %d\nend_x == %d\n\n",temp_square->size_sqr, temp_square->start_y, temp_square->start_x, temp_square->end_y, temp_square->end_x);
					return (temp_square);
				}
				else
				{
					//printf("X == %d\nY == %d\n", x, y);
					x++;
				}
			}
			x = temp_square->start_x;
			y++;
		}
		y = temp_square->start_y;
		i_x++;
		n_y++;
	}
	temp_square->end_x = i_x;
	temp_square->end_y = n_y - 1;
	temp_square->size_sqr = (((i_x + 1) - (temp_square->start_x + 1) + 1) * ((n_y)- (temp_square->start_y + 1))) + 1;
	return (temp_square);
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
			//printf("Y ==	%d\n", y);
			if (map[y][x] == param->c_pot)
			{
				
				temp_square->start_x = x;
				temp_square->start_y = y;
				//printf("Y 			==				%d\nX == %d\n", y, x);
				temp_square = temp_bsq(temp_square, param, map);
				//printf("Y 			==				%d\n", y);
				//printf("size_sqr == %d\nstart_y == %d\nstart_x == %d\nend_y == %d\nend_x ==%d\n\n",temp_square->size_sqr, temp_square->start_y, temp_square->start_x, temp_square->end_y, temp_square->end_x);
				if (square->size_sqr < temp_square->size_sqr)
				{
					square->size_sqr = temp_square->size_sqr;
					square->start_y = temp_square->start_y;
					square->start_x = temp_square->start_x;
					square->end_y = temp_square->end_y;
					square->end_x = temp_square->end_x;
				}
					//square = temp_to_square(temp_square, square);
				//printf("Y iW == %d || X iW == %d\n", y, x);		///////////////////
				//printf("Y ==	%d\n", y);
			}
			//printf("Y ==	%d\n", y);
			//printf("Y iW == %d || X iW == %d\n", y, x);		///////////////////
			x++;
		}
		x = 0;
		//printf("Y == %d\n", y);		///////////////////
		y++;
	}

	//printf("SWAG\n");
	printf("size_sqr == %d\nstart_y == %d\nstart_x == %d\nend_y == %d\nend_x ==%d\n", square->size_sqr, square->start_y, square->start_x, square->end_y, square->end_x);

	//printf("SWAG45\n");		///////////////////
	return (map_print(square, map, param));
}

char	**map_print(t_map_print *square, char **map, t_map_param *param)
{
	int		y;
	int		x;

	//printf("SWAG\n");				//////////////////////////////////

	x = square->start_x;
	y = square->start_y;
	//printf("x == %d || y == %d\n", x, y);			///////////////////////////////////
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
	//printf("SWAG600\n");			//////////////////////////////////
		int i = 1;
	while(map[i])
	{
		//printf("%s\n", map[i]);			////////////////////////
		i++;
	}

	return (map);
}
