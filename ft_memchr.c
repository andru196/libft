/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfalia-f <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/21 13:29:30 by sfalia-f          #+#    #+#             */
/*   Updated: 2018/11/21 13:29:31 by sfalia-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*src;
	unsigned char	cc;

	cc = (unsigned char)c;
	src = (unsigned char *)s;
	while (n--)
		if (*src++ == cc)
			return (--src);
	return (NULL);
}
