/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbradel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/21 15:50:52 by gbradel           #+#    #+#             */
/*   Updated: 2016/11/25 16:02:04 by gbradel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *dest, const char *src, size_t n)
{
	int		i;
	size_t	a;

	i = 0;
	a = 0;
	while (dest[i] != '\0')
		i++;
	while (a < n)
	{
		if (src[a] == '\0')
		{
			dest[i] = '\0';
			return (dest);
		}
		dest[i] = src[a];
		i++;
		a++;
	}
	dest[i] = '\0';
	return (dest);
}
