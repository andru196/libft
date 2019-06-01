/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfalia-f <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/22 19:41:48 by sfalia-f          #+#    #+#             */
/*   Updated: 2018/11/22 19:41:49 by sfalia-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	if (!alst)
		return ;
	if (*alst)
	{
		if ((*alst)->next)
			ft_lstdel(&((*alst)->next), del);
		ft_lstdelone(alst, del);
	}
	*alst = NULL;
}
