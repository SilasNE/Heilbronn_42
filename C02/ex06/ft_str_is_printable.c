/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sengel <sengel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/22 16:33:55 by sengel            #+#    #+#             */
/*   Updated: 2025/02/05 14:28:44 by sengel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<ctype.h>

int	ft_str_is_printable(char *str)
{
	while (*str != '\0')
	{
		if (!isprint(*str))
		{
			write(1, "0\n", 2);
			return (0);
		}
		str++;
	}
	write(1, "1\n", 2);
	return (1);
}
