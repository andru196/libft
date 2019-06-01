/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfalia-f <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/21 16:15:23 by sfalia-f          #+#    #+#             */
/*   Updated: 2018/11/21 16:15:25 by sfalia-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*str;
	char	*cpy_s;

	str = malloc(ft_strlen(s1) + 1);
	if (!str)
		return (NULL);
	cpy_s = str;
	while (*s1)
		*str++ = *s1++;
	*str = '\0';
	return (cpy_s);
}
