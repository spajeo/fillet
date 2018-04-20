/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sizesquare.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbradel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/06 15:29:13 by gbradel           #+#    #+#             */
/*   Updated: 2016/12/14 19:15:14 by spajeo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

static int			ft_sqr(int nb)
{
	int		sqr;

	sqr = 1;
	while (sqr * sqr < nb)
	{
		sqr++;
	}
	return (sqr);
}

static void			ft_printsquare(char **square, int lenght)
{
	int		y;
	int		i;

	i = -1;
	y = -1;
	while (square[++y])
	{
		write(1, square[y], lenght);
		write(1, "\n", 1);
	}
	while (++i <= lenght)
		free(square[i]);
	free(square);
	exit(0);
}

void				ft_sizesquare(t_data *first, int i, int a)
{
	int		lenght;
	char	**square;
	int		h;

	while ((lenght = (ft_sqr(4 * i) + a++)))
	{
		h = -1;
		if (!(square = malloc(sizeof(char*) * (lenght + 1))))
			return ;
		while (++h < lenght)
		{
			if (!(square[h] = malloc(sizeof(char) * (lenght + 1))))
				return ;
			ft_memset(square[h], 46, lenght);
			square[h][lenght] = '\0';
		}
		square[lenght] = 0;
		if (ft_findplace(square, first, lenght))
			ft_printsquare(square, lenght);
		h = -1;
		while (++h <= lenght)
			free(square[h]);
		free(square);
	}
	return ;
}
