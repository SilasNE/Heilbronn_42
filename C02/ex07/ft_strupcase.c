/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sengel <sengel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/22 16:55:33 by sengel            #+#    #+#             */
/*   Updated: 2025/02/05 14:30:38 by sengel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <ctype.h>

char	*ft_strupcase(char *str)
{
	char *original_str = str;

	while (*str != '\0')
	{
		*str = toupper(*str);
		str++;
	}
	str = original_str;
	write(1, str, 20);
	write(1, "\n", 20);

	return (0);
}