/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spajeo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/14 17:52:10 by spajeo            #+#    #+#             */
/*   Updated: 2018/04/20 16:56:36 by spajeo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		main(int argc, char **argv)
{
	int		fd;

	if (argc != 2)
	{
		ft_putstr("usage : ./Fillit Tetriminos_File");
		return (0);
	}
	fd = open(argv[1], O_RDONLY);
	if (fd == -1)
		ft_error();
	read_stock(fd);
	return (0);
}
