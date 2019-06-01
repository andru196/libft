/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfalia-f <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/22 19:52:11 by sfalia-f          #+#    #+#             */
/*   Updated: 2018/11/22 19:52:12 by sfalia-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd(t_list **alst, t_list *new)
{
	t_list	*tmp;

	if (!new || !alst)
		return ;
	if (!*alst)
	{
		*alst = new;
		return ;
	}
	tmp = *alst;
	*alst = new;
	(*alst)->next = tmp;
}
