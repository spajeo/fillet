/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbradel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/21 13:39:41 by gbradel           #+#    #+#             */
/*   Updated: 2016/11/29 13:24:17 by gbradel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char	*dest1;
	char	*src1;
	size_t	i;

	dest1 = (char *)dest;
	src1 = (char *)src;
	i = 0;
	if (n == 0)
		return (dest);
	if (src1 < dest1)
	{
		n--;
		while ((int)n >= 0)
		{
			dest1[n] = src1[n];
			n--;
		}
	}
	else
		while (i < n)
		{
			dest1[i] = src1[i];
			i++;
		}
	return (dest);
}
