/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sortb.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfalia-f <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/14 21:43:34 by sfalia-f          #+#    #+#             */
/*   Updated: 2018/12/14 21:43:35 by sfalia-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_sortb(int c, char **rv)
{
	int		j;
	char	*buf;
	char	swap_cnt;

	swap_cnt = 0;
	j = 1;
	while (j < c - 1)
	{
		if (ft_strcmp(rv[j], rv[j + 1]) > 0)
		{
			buf = rv[j];
			rv[j] = rv[j + 1];
			rv[j + 1] = buf;
			swap_cnt = 1;
		}
		j++;
		if (j == c - 1 && swap_cnt == 1)
		{
			swap_cnt = 0;
			j = 0;
		}
	}
}
