/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fillit.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbradel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/05 11:19:27 by gbradel           #+#    #+#             */
/*   Updated: 2016/12/14 21:51:38 by gbradel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

static int		ft_veriftouche(t_data *data)
{
	int		i;
	int		a;

	i = -1;
	while (data->tetri[++i])
	{
		a = 0;
		if (data->tetri[i] == data->lettre)
		{
			if (data->tetri[i - 1] && data->tetri[i - 1] == data->lettre)
				a++;
			if (data->tetri[i + 1] == data->lettre && data->tetri[i + 1])
				a++;
			if (data->tetri[i - 5] == data->lettre && data->tetri[i - 5])
				a++;
			if (data->tetri[i + 5] == data->lettre && data->tetri[i + 5])
				a++;
			if (a >= 2)
				return (1);
		}
	}
	return (0);
}

static int		ft_nbr_cubes(t_data *data)
{
	int		nb_d;
	int		i;

	i = -1;
	nb_d = 0;
	while (data->tetri[++i] != '\0')
	{
		if (data->tetri[i] == '#')
		{
			nb_d++;
			data->tetri[i] = data->lettre;
		}
	}
	if (nb_d != 4 || !ft_nbr_res(data))
	{
		ft_error();
	}
	i = -1;
	while (data->tetri[++i] != '\0')
		if (data->tetri[i] == data->lettre
				&& ft_nextispoint(data->tetri, data->lettre, i))
			ft_error();
	if (ft_veriftouche(data) != 1)
		ft_error();
	return (1);
}

static void		ft_error2(int ret, t_data *data)
{
	if (ret != 21)
	{
		if (ret == 20)
		{
			ft_nbr_cubes(data);
			ft_sizesquare(data, 1, 0);
		}
		else
			ft_error();
	}
}

static t_data	*ft_lstnewdata(char const *tetri, int i)
{
	t_data	*data;

	data = NULL;
	if (!(data = malloc(sizeof(t_data))))
		return (NULL);
	if (tetri == 0)
		data->tetri = NULL;
	else
	{
		if (!(data->tetri = malloc(sizeof(char) * 20)))
			return (0);
		if (ft_strlen(tetri) < 20 || i > 25)
			ft_error();
		ft_memcpy(data->tetri, tetri, 19);
		data->tetri[19] = '\0';
	}
	data->lettre = 'A' + i;
	data->next = NULL;
	return (data);
}

void			read_stock(int fd)
{
	char	buf[21];
	int		i;
	int		ret;
	t_data	*data;
	t_data	*first;

	i = 0;
	ret = read(fd, buf, 21);
	data = ft_lstnewdata(buf, i);
	first = data;
	ft_error2(ret, data);
	while (++i && (ret = read(fd, buf, 21)) == 21)
	{
		data->next = ft_lstnewdata(buf, i);
		data = data->next;
	}
	if (ret != 20)
		ft_error();
	data->next = ft_lstnewdata(buf, i);
	data = first;
	while (data && ft_nbr_cubes(data))
		data = data->next;
	ft_sizesquare(first, i, 0);
}
