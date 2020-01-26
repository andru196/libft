/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstartwith.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfalia-f <sfalia-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/26 17:18:23 by sfalia-f          #+#    #+#             */
/*   Updated: 2020/01/26 17:20:14 by sfalia-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strstartwith(char *str, char *start)
{
	int start_c;
	int string_c;

	start_c = ft_strlen(start);
	string_c = ft_strlen(str);
	if (start_c > string_c || ft_strncmp(str, start, start_c))
		return (0);
	return (1);
}
