/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_nbr_res.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spajeo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/14 20:09:43 by spajeo            #+#    #+#             */
/*   Updated: 2016/12/14 20:58:17 by gbradel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		ft_nbr_res(t_data *data)
{
	int		nb_bn;
	int		nb_p;
	int		i;

	i = -1;
	nb_p = 0;
	nb_bn = 0;
	while (data->tetri[++i] != '\0')
	{
		if (data->tetri[i] == '.')
			++nb_p;
		if (data->tetri[i] == '\n')
			++nb_bn;
	}
	if (nb_p == 12 && nb_bn == 3)
		return (1);
	return (0);
}
