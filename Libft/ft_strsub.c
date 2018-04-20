/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbradel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/22 12:36:57 by gbradel           #+#    #+#             */
/*   Updated: 2016/11/29 12:43:51 by gbradel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*str;
	size_t	i;
	int		a;

	a = 0;
	if (s == 0)
		return (0);
	str = malloc(sizeof(char) * (len + 1));
	if (str == NULL)
		return (0);
	i = start;
	while (i < start + len)
	{
		str[a] = s[i];
		i++;
		a++;
	}
	str[a] = '\0';
	return (str);
}
