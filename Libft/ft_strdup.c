/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbradel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/21 14:08:24 by gbradel           #+#    #+#             */
/*   Updated: 2016/11/24 19:35:30 by gbradel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	int			i;
	const char	*str;
	char		*dst;

	i = 0;
	str = s;
	dst = NULL;
	while (str[i] != '\0')
		i++;
	dst = malloc(sizeof(char) * (i + 1));
	if (dst == NULL)
		return (0);
	i = 0;
	while (str[i] != '\0')
	{
		dst[i] = str[i];
		i++;
	}
	dst[i] = str[i];
	return (dst);
}
