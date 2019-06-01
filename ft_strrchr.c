/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfalia-f <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/22 11:56:41 by sfalia-f          #+#    #+#             */
/*   Updated: 2018/11/22 11:56:43 by sfalia-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*str;
	char	sc;

	sc = (unsigned char)c;
	str = NULL;
	while (*s || *s == sc)
	{
		if (*s == sc)
			str = (char *)s;
		if (!*s)
			break ;
		s++;
	}
	return (str);
}
