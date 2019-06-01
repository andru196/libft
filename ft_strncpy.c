/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfalia-f <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/21 17:36:30 by sfalia-f          #+#    #+#             */
/*   Updated: 2018/11/21 17:36:31 by sfalia-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *dst, const char *src, size_t len)
{
	char *cpy;

	cpy = dst;
	while (len && *src)
	{
		len--;
		*dst++ = *src++;
	}
	if (len && !*src)
		while (len--)
			*dst++ = '\0';
	return (cpy);
}
