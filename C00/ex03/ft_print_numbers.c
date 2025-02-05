/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sengel <sengel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/20 09:56:02 by sengel            #+#    #+#             */
/*   Updated: 2025/02/03 11:50:37 by sengel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb)
{
	char	digit;

	if (nb >= 10)
	{
		ft_putnbr(nb / 10);
	}
	digit = '0' + (nb % 10);
	write(1, &digit, 1);
}

void	ft_print_numbers(void)
{
	int	nb;

	nb = 0;
	while (nb <= 9)
	{
		ft_putnbr(nb);
		nb++;
	}
}
