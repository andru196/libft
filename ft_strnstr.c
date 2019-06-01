/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfalia-f <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/22 12:29:00 by sfalia-f          #+#    #+#             */
/*   Updated: 2018/11/22 12:29:01 by sfalia-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	int		i;
	char	*str;

	str = (char *)haystack;
	while (*haystack && len)
	{
		i = 0;
		if (*haystack == *needle)
			str = (char *)haystack;
		while (*haystack && *needle && *haystack == *needle && len--)
		{
			haystack++;
			i++;
			needle++;
		}
		if (!(*needle))
			return (str);
		needle -= i;
		haystack -= (i - 1);
		len += i - 1;
	}
	return ((!*needle) ? str : NULL);
}
