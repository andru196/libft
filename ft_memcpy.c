/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfalia-f <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/20 18:28:17 by sfalia-f          #+#    #+#             */
/*   Updated: 2018/11/20 18:28:19 by sfalia-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*cpy_dst;
	void			*ccpy_dst;
	unsigned char	*cpy_src;
	size_t			i;

	i = 0;
	ccpy_dst = dst;
	cpy_src = (unsigned char *)src;
	cpy_dst = (unsigned char *)dst;
	while (i < n)
	{
		*(cpy_dst++) = *(cpy_src++);
		i++;
	}
	return (ccpy_dst);
}
