/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_sqr2.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpaul <gpaul@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/21 17:52:45 by gpaul             #+#    #+#             */
/*   Updated: 2020/07/21 18:19:00 by gpaul            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

t_map_print		*temp_to_square(t_temp_sqr *temp_square, t_map_print *square)
{
	square->size_sqr = temp_square->size_sqr;
	square->start_y = temp_square->start_y;
	square->start_x = temp_square->start_x;
	square->end_y = temp_square->end_y;
	square->end_x = temp_square->end_x;
	return (square);
}

t_temp_sqr		*temp_fill(t_temp_sqr *temp_square, int y, int x)
{
	temp_square->end_x = x - 1;
	temp_square->end_y = y - 1;
	temp_square->size_sqr = (x - (x - 1)) * (y - (y - 1));
	return (temp_square);
}
