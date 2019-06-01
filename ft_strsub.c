/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfalia-f <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/22 15:48:43 by sfalia-f          #+#    #+#             */
/*   Updated: 2018/11/22 16:03:37 by sfalia-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*str;
	char	*c_str;
	size_t	len0;

	if (!s)
		return (NULL);
	len0 = ft_strlen(s);
	if (start > len0 - 1 || len0 < (start + len))
		return (NULL);
	len0 = (len0 >= (len + start)) ? (len + 1) : (len0 - start + 1);
	while (start-- && *s)
		s++;
	str = malloc(len0--);
	if (!str)
		return (str);
	c_str = str;
	while (*s && len0--)
		*str++ = *s++;
	*str = '\0';
	return (c_str);
}
