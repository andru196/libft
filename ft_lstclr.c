/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfalia-f <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/16 21:29:30 by sfalia-f          #+#    #+#             */
/*   Updated: 2018/12/16 21:29:43 by sfalia-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclr(t_list **hl)
{
	t_list *frs;
	t_list *sec;

	frs = *hl;
	while (frs)
	{
		sec = frs->next;
		free(frs->content);
		free(frs);
		frs = sec;
	}
	free(hl);
	*hl = NULL;
}
