/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfalia-f <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/22 19:17:31 by sfalia-f          #+#    #+#             */
/*   Updated: 2018/11/22 19:18:09 by sfalia-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list	*new_l;

	new_l = (t_list *)malloc(sizeof(t_list));
	if (!new_l)
		return (new_l);
	if (content == NULL)
	{
		new_l->content = NULL;
		new_l->content_size = 0;
	}
	else
	{
		new_l->content_size = content_size;
		new_l->content = ft_memmove(ft_memalloc(content_size),
									content, content_size);
	}
	new_l->next = NULL;
	return (new_l);
}
