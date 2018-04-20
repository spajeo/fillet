/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_nextispoint.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbradel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/14 22:21:45 by gbradel           #+#    #+#             */
/*   Updated: 2016/12/14 22:22:24 by gbradel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		ft_nextispoint(char *c, char d, int i)
{
	return ((i - 5 < 0 || c[i - 5] != d)
		&& (i + 5 > 19 || c[i + 5] != d)
		&& (i - 1 < 0 || c[i - 1] != d)
		&& (i + 1 > 19 || c[i + 1] != d));
}
