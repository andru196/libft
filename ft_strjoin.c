/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfalia-f <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/22 17:53:16 by sfalia-f          #+#    #+#             */
/*   Updated: 2018/11/22 17:53:18 by sfalia-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	char	*rez;
	int		i;

	if (s1 == NULL && s2 == NULL)
		return (NULL);
	if (s1 == NULL || s2 == NULL)
		return (s1 == NULL ? ft_strjoin(s2, "") : ft_strjoin(s1, ""));
	i = ft_strlen(s1);
	i += ft_strlen(s2);
	str = malloc(i + 1);
	if (!str)
		return (str);
	rez = str;
	while (*s1)
		*str++ = *s1++;
	while (*s2)
		*str++ = *s2++;
	*str = '\0';
	return (rez);
}
