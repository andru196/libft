/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfalia-f <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/22 15:30:23 by sfalia-f          #+#    #+#             */
/*   Updated: 2018/11/22 15:39:15 by sfalia-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	int		i;
	char	*str;

	i = 0;
	if (!s)
		return (NULL);
	while (*s++)
		i++;
	s -= i + 1;
	str = malloc(i + 1);
	if (str == NULL)
		return (str);
	while (*s)
		*str++ = f(*s++);
	*str = '\0';
	return (str - i);
}
