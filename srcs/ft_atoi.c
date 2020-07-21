/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsannie <tsannie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/05 19:19:22 by tsannie           #+#    #+#             */
/*   Updated: 2020/07/21 13:49:41 by tsannie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

long	ft_atoi(char *str)
{
	long i;
	long nb_moins;
	long res;

	i = 0;
	nb_moins = 0;
	res = 0;
	while (str[i] == '\t' || str[i] == '\n' || str[i] == '\v'
	|| str[i] == '\f' || str[i] == '\r' || str[i] == ' ')
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			nb_moins++;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		res = (res * 10) + (str[i] - '0');
		i++;
	}
	return (nb_moins % 2 == 0 ? res : -res);
}
