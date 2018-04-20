/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbradel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/22 11:24:16 by gbradel           #+#    #+#             */
/*   Updated: 2016/11/25 13:47:43 by gbradel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	int		i;
	char	*str;

	i = 0;
	str = malloc(sizeof(char) * (size + 1));
	if (str == NULL)
		return (0);
	while (str[i])
	{
		str[i] = '\0';
		i++;
	}
	return (str);
}
