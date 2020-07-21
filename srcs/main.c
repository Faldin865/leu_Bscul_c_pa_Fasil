/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsannie <tsannie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/20 15:49:21 by gpaul             #+#    #+#             */
/*   Updated: 2020/07/21 18:26:16 by tsannie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int		main(int argc, char **argv)
{
	int			i;
	char		**map;
	t_map_param	*param;

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
			print_complete(map);
			free(map);
			free(param);
			i++;
		}
	}
	return (0);
}
