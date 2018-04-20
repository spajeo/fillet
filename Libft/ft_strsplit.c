/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbradel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/22 13:05:20 by gbradel           #+#    #+#             */
/*   Updated: 2016/11/29 12:44:29 by gbradel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_strcustom2(char const *str, char c, int nb)
{
	int		i;
	int		a;

	i = 0;
	a = 0;
	while (str[i] != '\0' && nb >= 0)
	{
		while (str[i] == c)
			i++;
		while (str[i] != c && str[i] != '\0' && nb == 0)
		{
			i++;
			a++;
		}
		while (str[i] != c && str[i] != '\0')
			i++;
		nb--;
	}
	return (a);
}

static int	ft_strcustom(char const *str, char c)
{
	int		i;
	int		a;

	i = 0;
	a = 0;
	while (str[i] != '\0')
	{
		while (str[i] != c && str[i] != '\0')
		{
			i++;
		}
		if (i > 0)
			a++;
		while (str[i] == c)
			i++;
	}
	return (a);
}

static char	**ft_norme(char const *s, char **tb, char c)
{
	int		i;
	int		x;
	int		y;

	i = 0;
	x = 0;
	while (s[i] != '\0')
	{
		y = 0;
		while (s[i] == c && s[i] != '\0')
			i++;
		while (s[i] != c && s[i] != '\0')
		{
			tb[x][y] = s[i];
			y++;
			i++;
		}
		if (y > 0)
			tb[x][y] = '\0';
		x++;
	}
	return (tb);
}

char		**ft_strsplit(char const *s, char c)
{
	char	**tb;
	int		x;
	int		a;

	if (s == 0)
		return (0);
	a = ft_strcustom(s, c);
	x = 0;
	tb = malloc(sizeof(char*) * (a + 1));
	if (tb == NULL)
		return (0);
	while (x < a)
	{
		tb[x] = malloc(sizeof(char) * (ft_strcustom2(s, c, x) + 1));
		if (tb[x] == NULL)
			return (0);
		x++;
	}
	tb = ft_norme(s, tb, c);
	tb[x] = NULL;
	return (tb);
}
