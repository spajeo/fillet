/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stlmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbradel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/29 18:42:44 by gbradel           #+#    #+#             */
/*   Updated: 2016/11/29 18:46:05 by gbradel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*i;
	t_list	*tmp;
	t_list	*tmp2;

	tmp2 = f(lst);
	i = ft_lstnew(tmp2->content, tmp2->content_size);
	if (i)
		tmp = i;
	lst = lst->next;
	while (lst)
	{
		tmp2 = f(lst);
		if (!(tmp->next = ft_lstnew(tmp2->content, tmp2->content_size)))
			return (NULL);
		tmp = tmp->next;
		lst = lst->next;
	}
	return (i);
}
