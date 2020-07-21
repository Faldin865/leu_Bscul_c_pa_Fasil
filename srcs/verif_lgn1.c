/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   verif_lgn1.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsannie <tsannie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/20 19:17:30 by tsannie           #+#    #+#             */
/*   Updated: 2020/07/21 16:55:44 by tsannie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int		verif_same(t_map_param *param)
{
	if (param->c_pot == param->obs || param->c_pot == param->filler
		|| param->obs == param->filler)
		return (-1);
	return (0);
}

int		verif_nb(char *str, int i_dep)
{
	int i;
	int nb_char;

	nb_char = 0;
	i = i_dep;
	while (str[i] && i >= 0)
	{
		if (str[i] > '9' || str[i] < '0')
			return (-1);
		if (nb_char > 9)
			return (-1);
		i--;
		nb_char++;
	}
	return (0);
}

int		calc_nb(char *str, int size)
{
	int		i;
	char	*res;
	int		nb;

	if (!(res = malloc(sizeof(char) * size + 1)))
		return (-1);
	i = 0;
	while (size != -1)
	{
		res[i] = str[i];
		size--;
		i++;
	}
	res[i] = '\0';
	if (ft_atoi(res) > 2147483647)
		return (-1);
	nb = ft_atoi(res);
	free(res);
	return (nb < 0 ? -1 : nb);
}

int		all_char(char *str, t_map_param *param)
{
	int			i;
	int			size;
	int			nb;

	i = 0;
	size = ft_strlen(str);
	param->filler = str[size - 1];
	param->obs = str[size - 2];
	param->c_pot = str[size - 3];
	if (verif_nb(str, (size - 4)) != 0)
		return (-1);
	nb = calc_nb(str, (size - 4));
	if (nb == -1)
		return (-1);
	param->size_y = nb;
	return (0);
}

int		verif_lgn1(char *str, t_map_param *param)
{
	if (ft_strlen(str) < 4)
		return (-1);
	if (all_char(str, param) != 0)
		return (-1);
	if (verif_same(param) != 0)
		return (-1);
	return (0);
}
