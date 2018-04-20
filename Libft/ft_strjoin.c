/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbradel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/22 12:45:25 by gbradel           #+#    #+#             */
/*   Updated: 2016/11/29 12:49:18 by gbradel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	int		a;
	char	*str;

	i = 0;
	a = 0;
	if (s1 == 0 || s2 == 0)
		return (0);
	if (!(str = malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1))))
		return (0);
	while (s1[i] != '\0')
	{
		str[a] = s1[i];
		i++;
		a++;
	}
	i = 0;
	while (s2[i] != '\0')
	{
		str[a] = s2[i];
		i++;
		a++;
	}
	str[a] = '\0';
	return (str);
}
