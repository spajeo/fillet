/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbradel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/22 12:52:22 by gbradel           #+#    #+#             */
/*   Updated: 2016/11/29 12:46:19 by gbradel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	int		i;
	int		a;
	int		z;
	char	*str;

	i = 0;
	z = 0;
	if (!s)
		return (NULL);
	while (s[i] == ' ' || s[i] == '\n' || s[i] == '\t')
		i++;
	a = i;
	if (s[i])
	{
		while (s[i] != '\0')
			i++;
		while (s[i] == ' ' || s[i] == '\n' || s[i] == '\t' || s[i] == '\0')
			i--;
	}
	if (!(str = malloc(sizeof(char) * (i - a + 2))))
		return (NULL);
	while (a <= i)
		str[z++] = s[a++];
	str[z] = '\0';
	return (str);
}
