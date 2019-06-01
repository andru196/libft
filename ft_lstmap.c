/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfalia-f <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/22 19:57:24 by sfalia-f          #+#    #+#             */
/*   Updated: 2018/11/22 19:57:25 by sfalia-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*lt1;
	t_list	*lt2;
	t_list	*rez;

	if (lst == NULL || f == NULL)
		return (NULL);
	rez = f(lst);
	lst = lst->next;
	lt2 = rez;
	while (lst)
	{
		lt1 = lst->next;
		if (!(lt2->next = f(lst)))
		{
			lst = NULL;
			ft_lstclr(&rez);
		}
		else
		{
			lt2 = lt2->next;
			lst = lt1;
		}
	}
	return (rez);
}
