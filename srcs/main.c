/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpaul <gpaul@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/20 15:49:21 by gpaul             #+#    #+#             */
/*   Updated: 2020/07/21 18:57:06 by gpaul            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

t_temp_sqr		*init_temp(void)
{
	t_temp_sqr	*temp_square;

	if ((temp_square = malloc(sizeof(t_temp_sqr) * 1)) == NULL)
		return (0);
	return (temp_square);
}

t_map_print		*init_square(void)
{
	t_map_print	*square;

	if ((square = malloc(sizeof(t_map_print) * 1)) == NULL)
		return (0);
	return (square);
}

int		main(int argc, char **argv)
{
	int			i;
	char		**map;
	t_map_param		*param;
	t_map_print		*square;
	t_temp_sqr		*temp_square;




	i = 1;
	if (argc >= i)
	{
		while (i != argc)
		{
			if (!(param = malloc(sizeof(t_map_param) * 1)))
				return (-1);
			if ((map = init_board(argv[i], param)) == NULL)
			{
				return (ft_invalid());
			}
				printf("TEST\n");		/////////////////////
				square = init_square();
				printf("TEST1\n");		/////////////////////
				temp_square = init_temp();
				printf("TEST2\n");		/////////////////////

				map = find_bsq(temp_square, square, param, map);

			print_complete(map);
			free(map);
			free(param);
			i++;
		}
	}
	return (0);
}
