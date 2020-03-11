/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_num_eq.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andru196 <andru196@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/01 15:11:04 by andru196          #+#    #+#             */
/*   Updated: 2020/03/04 21:38:54 by andru196         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int str_num_eq(long num, char *str)
{
	char	*cpy;

	cpy = str;
	if (!str || (!num && *str != '0'))
		return (0);
	while (*str)
		str++;
	while (str != cpy && num)
	{
		if (*(--str) - '0' != num % 10)
			return (0);
		num /= 10;
	}
	while (!num && str != cpy && (*str == '0' || !*str))
		str--;
	return (!num && str == cpy);
}
