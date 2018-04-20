/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbradel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/24 17:04:28 by gbradel           #+#    #+#             */
/*   Updated: 2016/12/06 16:53:17 by gbradel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	sizesrc;
	size_t	sizedest;

	sizedest = ft_strlen(dest);
	sizesrc = ft_strlen(src);
	if (size <= sizedest)
		return (size + sizesrc);
	dest = ft_strncat(dest, src, size - sizedest - 1);
	return (sizesrc + sizedest);
}
