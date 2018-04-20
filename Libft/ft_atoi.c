/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbradel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/21 18:36:28 by gbradel           #+#    #+#             */
/*   Updated: 2016/11/29 18:58:21 by gbradel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int nb;
	int neg;
	int	i;

	nb = 0;
	neg = 0;
	i = 0;
	while (str[i] == '\t' || str[i] == '\f' || str[i] == '\r' || str[i] == '\v'
			|| str[i] == '\n' || str[i] == ' ')
		i++;
	if (str[i] == '-')
	{
		neg = 1;
		i++;
	}
	else if (str[i] == '+')
		i++;
	while (str[i] >= '0' && str[i] <= '9')
	{
		nb = nb * 10 + str[i] - '0';
		i++;
	}
	if (neg == 1)
		nb = -nb;
	return (nb);
}
