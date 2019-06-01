/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfalia-f <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/22 14:54:00 by sfalia-f          #+#    #+#             */
/*   Updated: 2018/11/22 14:54:12 by sfalia-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	char	*str;
	int		i;

	i = (int)size;
	str = malloc(size + 1);
	if (!str)
		return (str);
	while (i + 1)
		str[i--] = '\0';
	return (str);
}
