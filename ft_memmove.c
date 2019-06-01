/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfalia-f <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/21 12:56:36 by sfalia-f          #+#    #+#             */
/*   Updated: 2018/11/21 12:56:38 by sfalia-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*cpy_dst;
	unsigned char	*cpy_src;

	cpy_src = (unsigned char *)src;
	cpy_dst = (unsigned char *)dst;
	if (dst > src)
	{
		cpy_dst += len - 1;
		cpy_src += len - 1;
		while (len--)
		{
			*cpy_dst-- = *cpy_src--;
		}
	}
	else
		while (len--)
		{
			*cpy_dst++ = *cpy_src++;
		}
	return (dst);
}
