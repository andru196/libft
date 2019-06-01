/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfalia-f <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/21 17:48:37 by sfalia-f          #+#    #+#             */
/*   Updated: 2018/11/21 17:48:40 by sfalia-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;

	i = ft_strlen(dst);
	j = ft_strlen(src);
	if (size > i)
	{
		j += i;
		while (*dst)
			dst++;
		while ((size) > i + 1 && *src)
		{
			*dst++ = *src++;
			i++;
		}
		*dst = '\0';
	}
	else
		j = j + (int)size;
	return (j);
}
