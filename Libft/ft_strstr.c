/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbradel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/21 17:27:47 by gbradel           #+#    #+#             */
/*   Updated: 2016/11/25 17:55:19 by gbradel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *big, const char *little)
{
	int		i;
	int		a;
	int		i1;
	char	*str;

	i = 0;
	a = 0;
	str = (char *)big;
	if (little[i] == '\0')
		return (str + i);
	while (str[i] != '\0')
	{
		i1 = i;
		while (str[i1] == little[a] && little[a] != '\0' && str[i1] != '\0')
		{
			i1++;
			a++;
		}
		if (little[a] == '\0')
			return (str + i);
		a = 0;
		i++;
	}
	return (0);
}
