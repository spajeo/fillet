/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbradel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/22 14:35:16 by gbradel           #+#    #+#             */
/*   Updated: 2016/11/28 17:24:23 by gbradel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count_int(int nb)
{
	int		i;

	i = 0;
	if (nb == 0)
		return (1);
	while (nb)
	{
		nb = nb / 10;
		i++;
	}
	return (i);
}

static char	*ft_intminitoa(int n)
{
	char	*str;

	n = 8;
	str = malloc(sizeof(char) * 12);
	if (str == NULL)
		return (0);
	str[0] = '-';
	str[1] = '2';
	str[2] = '1';
	str[3] = '4';
	str[4] = '7';
	str[5] = '4';
	str[6] = '8';
	str[7] = '3';
	str[8] = '6';
	str[9] = '4';
	str[10] = '8';
	str[11] = '\0';
	return (str);
}

static char	*ft_norme(char *str, int i, int nb, int neg)
{
	str[i + neg] = '\0';
	while (i-- > 0)
	{
		str[i + neg] = nb % 10 + '0';
		nb = nb / 10;
	}
	if (neg == 1)
		str[0] = '-';
	return (str);
}

char		*ft_itoa(int nb)
{
	int		i;
	int		neg;
	char	*str;

	neg = 0;
	if (nb < 0)
	{
		nb = nb * -1;
		neg++;
	}
	if (nb == -2147483648)
		return (ft_intminitoa(3));
	i = ft_count_int(nb);
	str = malloc(sizeof(char) * (i + neg + 1));
	if (str == NULL)
		return (0);
	ft_norme(str, i, nb, neg);
	return (str);
}
