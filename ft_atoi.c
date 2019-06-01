/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfalia-f <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/22 12:59:52 by sfalia-f          #+#    #+#             */
/*   Updated: 2018/11/22 13:37:28 by sfalia-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static long long int	atoi_fuc(char *c, int sigh)
{
	long long int	nbr;
	long long int	tens;
	int				i;

	tens = 1;
	nbr = 0;
	i = 0;
	while (*c >= '0' && *c <= '9')
	{
		nbr += tens * (*c-- - '0');
		tens *= 10;
		i++;
	}
	if (*(++c) == '0')
		while (*c++ == '0')
			i--;
	sigh = sigh == -1 ? 0 : 1;
	return ((i > 10) ? -sigh : nbr);
}

int						ft_atoi(const char *str)
{
	int				sigh;
	long long int	rez;

	while (*str == ' ' || (*str >= 9 && *str <= 13))
		str++;
	sigh = (*str == '-') ? -1 : 1;
	if (*str == '-' || *str == '+')
		str++;
	if (*str >= '0' && *str <= '9')
		while (*str >= '0' && *str <= '9')
			str++;
	else
		return (0);
	rez = atoi_fuc((char *)str - 1, sigh);
	return ((int)(rez == 2147483648 && sigh == -1) ?
			-2147483648 : (int)rez * sigh);
}
