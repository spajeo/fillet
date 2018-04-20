/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ispunct.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbradel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/06 17:42:02 by gbradel           #+#    #+#             */
/*   Updated: 2016/12/06 17:45:59 by gbradel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_ispunct(char c)
{
	if (c >= '!' && c <= '/')
		return (1);
	if (c >= ':' && c <= '@')
		return (1);
	if (c >= '[' && c <= '`')
		return (1);
	if (c >= '{' && c <= '~')
		return (1);
	return (0);
}
