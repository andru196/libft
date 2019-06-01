/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strndup.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfalia-f <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/18 16:44:32 by sfalia-f          #+#    #+#             */
/*   Updated: 2018/12/18 16:44:34 by sfalia-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strndup(const char *s1, size_t n)
{
	char	*rez;
	size_t	i;

	i = ft_strlen(s1);
	i = (n > i ? i : n);
	rez = malloc(i + 1);
	if (rez)
	{
		rez[i] = '\0';
		return (ft_strncpy(rez, s1, i));
	}
	else
		return (NULL);
}
