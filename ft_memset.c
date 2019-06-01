/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfalia-f <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/20 16:12:26 by sfalia-f          #+#    #+#             */
/*   Updated: 2018/11/20 16:12:28 by sfalia-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*a;
	size_t			i;

	a = (unsigned char *)b;
	c %= 256;
	i = 0;
	while (len > i)
	{
		a[i] = c;
		i++;
	}
	return (b);
}
