/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_findtheplace.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spajeo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/11 23:19:59 by spajeo            #+#    #+#             */
/*   Updated: 2016/12/14 21:05:18 by spajeo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

static char		*ft_tetri_coordonnee(t_data *data)
{
	char		*coord_tetri;
	int			t;
	int			i;
	int			ref;

	t = 0;
	i = 0;
	ref = -1;
	coord_tetri = ft_strnew(6);
	while (data->tetri[t])
	{
		if (data->tetri[t] == data->lettre)
		{
			if (ref != -1)
			{
				coord_tetri[i] = t / 5 - ref / 5;
				coord_tetri[i + 1] = t % 5 - ref % 5;
				i = i + 2;
			}
			if (ref == -1)
				ref = t;
		}
		t++;
	}
	return (coord_tetri);
}

static int		ft_free_space(char **square, char *a, int y, int x)
{
	int			lenght;

	lenght = ft_strlen(*square);
	if (0 <= (y + *a) && y + *a < lenght
			&& 0 <= x + *(a + 1)
			&& x + *(a + 1) < lenght
			&& 0 <= y + *(a + 2)
			&& y + *(a + 2) < lenght
			&& 0 <= x + *(a + 3)
			&& x + *(a + 3) < lenght
			&& 0 <= y + *(a + 4)
			&& y + *(a + 4) < lenght
			&& 0 <= x + *(a + 5)
			&& x + *(a + 5) < lenght)
		if (square[y + *(a)][x + *(a + 1)] == '.'
				&& square[y + *(a + 2)][x + *(a + 3)] == '.'
				&& square[y + *(a + 4)][x + *(a + 5)] == '.')
			return (1);
	return (0);
}

static int		ft_tetris_ok(t_data *data, char **square, int y, int x)
{
	char		*c_tet;

	c_tet = ft_tetri_coordonnee(data);
	if (square[y][x] == '.' && ft_free_space(square, c_tet, y, x))
	{
		square[y][x] = data->lettre;
		square[y + *(c_tet)][x + *(c_tet + 1)] = data->lettre;
		square[y + *(c_tet + 2)][x + *(c_tet + 3)] = data->lettre;
		square[y + *(c_tet + 4)][x + *(c_tet + 5)] = data->lettre;
		return (1);
	}
	return (0);
}

char			**ft_findplace(char **square, t_data *data, int lenght)
{
	int			x;
	int			y;
	char		**tmp;

	y = -1;
	lenght = lenght * 1;
	while (square[++y])
	{
		x = -1;
		while (square[y][++x])
			if (square[y][x] == '.')
			{
				if (ft_tetris_ok(data, square, y, x))
				{
					if (data->next == NULL)
						return (square);
					if ((tmp = ft_findplace(square, data->next, lenght)))
						return (tmp);
					ft_delete_lettre(square, data->lettre);
				}
			}
	}
	return (0);
}
