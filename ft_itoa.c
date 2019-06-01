/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strits.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfalia-f <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/29 16:29:56 by sfalia-f          #+#    #+#             */
/*   Updated: 2018/11/29 16:30:43 by sfalia-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_strintlener(int nbr)
{
	int	i;

	i = 0;
	while (nbr)
	{
		nbr /= 10;
		i++;
	}
	return (i);
}

char		*ft_itoa(int nbr)
{
	long int	cpy;
	char		*rez;
	int			i;
	int			sign;

	cpy = nbr;
	i = 0;
	if (!nbr)
		return (ft_strdup("0"));
	if (nbr < 0)
	{
		sign = 1;
		cpy = -cpy;
		i++;
	}
	i += ft_strintlener(cpy);
	rez = ft_strnew(i);
	while (cpy && rez)
	{
		rez[--i] = (cpy % 10) + '0';
		cpy /= 10;
	}
	if (rez && !(rez[0] >= '0' && rez[0] <= '9'))
		rez[0] = '-';
	return (rez);
}
