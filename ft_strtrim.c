/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfalia-f <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/30 20:02:17 by sfalia-f          #+#    #+#             */
/*   Updated: 2018/11/30 20:02:18 by sfalia-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	char	*cpy;
	char	*rez;
	int		len;
	int		c_len;

	len = 0;
	if (!s)
		return (NULL);
	while (*s && (*s == '\n' || *s == ' ' || *s == '\t'))
		s++;
	cpy = (char *)s;
	while (*cpy)
		cpy++;
	cpy = (cpy == s) ? cpy : cpy - 1;
	while (*cpy == '\n' || *cpy == ' ' || *cpy == '\t')
		cpy--;
	while (cpy-- != s)
		len = (s == cpy) ? len + 2 : len + 1;
	if (!(rez = malloc(len + 1)))
		return (NULL);
	c_len = len;
	while (len--)
		*rez++ = *s++;
	*rez = '\0';
	return (rez - c_len);
}
