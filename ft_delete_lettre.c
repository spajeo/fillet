/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_delete_lettre.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbradel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/07 15:25:21 by gbradel           #+#    #+#             */
/*   Updated: 2016/12/14 16:11:38 by spajeo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

void	ft_delete_lettre(char **square, char lettre)
{
	int		x;
	int		y;

	y = -1;
	while (square[++y])
	{
		x = -1;
		while (square[y][++x])
		{
			if (square[y][x] == lettre)
				square[y][x] = '.';
		}
	}
	return ;
}
