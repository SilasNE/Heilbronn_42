/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sengel <sengel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/29 10:35:02 by sengel            #+#    #+#             */
/*   Updated: 2025/02/05 15:49:58 by sengel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	char	*name;
	int		len;

	if (argc > 0)
	{
		name = argv[0];
		len = 0;
		while (name[len] != '\0')
		{
			len++;
		}
		write(1, name, len);
		write(1, "\n", 1);
	}
	return (0);
}
