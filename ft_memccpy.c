/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memccpy.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfalia-f <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/20 19:45:52 by sfalia-f          #+#    #+#             */
/*   Updated: 2018/11/20 19:45:54 by sfalia-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char	*cp_dst;
	unsigned char	*cp_src;
	unsigned char	cp_c;

	cp_c = (unsigned char)c;
	cp_dst = (unsigned char *)dst;
	cp_src = (unsigned char *)src;
	while (n--)
	{
		*cp_dst = *cp_src++;
		if ((int)*cp_dst++ == cp_c)
			return ((void *)cp_dst);
	}
	return (NULL);
}
