/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbradel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/24 16:58:16 by gbradel           #+#    #+#             */
/*   Updated: 2016/11/25 17:59:36 by gbradel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	a;
	size_t	i1;
	char	*str;

	i = 0;
	a = 0;
	str = (char *)big;
	if (little[i] == '\0')
		return (str + i);
	while (str[i] != '\0' && i < len)
	{
		i1 = i;
		while (str[i1] == little[a] && i1 < len && str[i1] != '\0'
				&& little[a] != '\0')
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
