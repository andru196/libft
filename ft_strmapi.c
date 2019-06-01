/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfalia-f <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/01 13:50:33 by sfalia-f          #+#    #+#             */
/*   Updated: 2018/12/01 13:50:34 by sfalia-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		i;
	char	*str;
	int		j;

	i = 0;
	if (!s)
		return (NULL);
	while (*s++)
		i++;
	s -= i + 1;
	str = malloc(i + 1);
	if (str == NULL)
		return (str);
	j = 0;
	while (*s)
		*str++ = f(j++, *s++);
	*str = '\0';
	return (str - i);
}
