/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfalia-f <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/22 12:09:16 by sfalia-f          #+#    #+#             */
/*   Updated: 2018/11/22 12:09:17 by sfalia-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	char	*f;
	int		i;

	f = (char *)haystack;
	while (*haystack)
	{
		i = 0;
		if (*haystack == *needle)
			f = (char *)haystack;
		while (*needle && *haystack && *haystack == *needle)
		{
			i++;
			needle++;
			haystack++;
		}
		if (!(*needle))
			return (f);
		needle -= i;
		haystack -= (i - 1);
	}
	if (!*needle)
		return ((char *)haystack);
	return (NULL);
}
