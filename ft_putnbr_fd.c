/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfalia-f <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/22 18:59:33 by sfalia-f          #+#    #+#             */
/*   Updated: 2018/11/22 19:02:10 by sfalia-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long int	tens;
	char		c;

	if (n < 0)
	{
		write(fd, "-", 1);
		if (n == -2147483648)
			return ((void)write(fd, "2147483648", 11));
		n = -(n);
	}
	tens = 1;
	while (tens < n)
		tens *= 10;
	if (tens != 1)
		tens /= 10;
	while (tens > 0)
	{
		c = n / tens;
		n -= c * tens;
		c += '0';
		write(fd, &c, 1);
		tens /= 10;
	}
}
