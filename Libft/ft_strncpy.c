/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbradel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/21 15:12:59 by gbradel           #+#    #+#             */
/*   Updated: 2016/11/24 19:52:58 by gbradel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *dest, const char *src, size_t n)
{
	size_t	i;
	size_t	a;

	i = 0;
	a = 0;
	while (a < n)
	{
		if (src[i] != '\0')
		{
			dest[a] = src[i];
			i++;
		}
		else
			dest[a] = '\0';
		a++;
	}
	return (dest);
}
