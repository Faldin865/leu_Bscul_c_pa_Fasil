/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpaul <gpaul@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/20 13:54:40 by gpaul             #+#    #+#             */
/*   Updated: 2020/07/22 10:45:39 by gpaul            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_H

# define FT_H

# include <unistd.h>
# include <sys/types.h>
# include <sys/stat.h>
# include <fcntl.h>
# include <stdlib.h>

# include <stdio.h>	//////////////////////////////////////////

typedef	struct	s_map_param
{
	int		len;
	int		size_y;
	char	c_pot;
	char	obs;
	char	filler;
}				t_map_param;

typedef	struct	s_temp_sqr
{
	int		size_sqr;
	int		start_y;
	int		start_x;
	int		end_y;
	int		end_x;
}				t_temp_sqr;

typedef	struct	s_print_sqr
{
	int		size_sqr;
	int		start_y;
	int		start_x;
	int		end_y;
	int		end_x;
}				t_map_print;

int				ft_strlen(char *str);
void			ft_putchar(char c);
void			ft_putstr(char *str);
int				ft_invalid(void);
char			**ft_split(char *str);
char			**ouverture(char *map_file);
int				check_map(char **map, t_map_param *param);
long			ft_atoi(char *str);
int				verif_lgn1(char *str, t_map_param *param);
char			**init_board(char *name, t_map_param *param);
void			print_complete(char **tab);
char			**map_print(t_map_print *square,
				char **map, t_map_param *param);
t_map_print		*temp_to_square(t_temp_sqr *temp_square, t_map_print *square);
t_temp_sqr		*temp_fill(t_temp_sqr *temp_square, int y, int x);
int				init_struct(void);
char		**find_bsq(t_temp_sqr *temp_square, t_map_print *square, t_map_param *param, char **map);

#endif
