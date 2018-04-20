/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbradel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/21 18:30:55 by gbradel           #+#    #+#             */
/*   Updated: 2016/11/25 17:29:47 by gbradel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strcmp(const char *s1, const char *s2)
{
	int				i;
	unsigned char	*s22;
	unsigned char	*s11;

	s22 = (unsigned char *)s2;
	s11 = (unsigned char *)s1;
	i = 0;
	while (s11[i] == s22[i] && s11[i] != '\0' && s22[i] != '\0')
		i++;
	return ((s11[i] - s22[i]));
}
