/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbradel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/19 18:19:21 by gbradel           #+#    #+#             */
/*   Updated: 2016/11/24 16:39:33 by gbradel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*toto;

	toto = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		toto[i] = (unsigned char)c;
		i++;
	}
	return (toto);
}
