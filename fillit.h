/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbradel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/05 13:12:23 by gbradel           #+#    #+#             */
/*   Updated: 2018/04/20 16:56:12 by spajeo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILLIT_H
# define FILLIT_H

# include <unistd.h>
# include <fcntl.h>
# include <stdlib.h>
# include "Libft/libft.h"
# include <stdio.h>

typedef struct		s_data
{
	char			*tetri;
	char			lettre;
	struct s_data	*next;
}					t_data;

void				read_stock(int fd);
void				ft_error(void);
int					ft_nextispoint(char *c, char d, int i);
void				ft_sizesquare(t_data *first, int i, int a);
char				**ft_findplace(char **square, t_data *data, int lenght);
void				ft_delete_lettre(char **square, char lettre);
int					ft_nbr_res(t_data *data);

#endif
