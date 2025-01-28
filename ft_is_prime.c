/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sengel <sengel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/28 15:44:19 by sengel            #+#    #+#             */
/*   Updated: 2025/01/28 15:58:35 by sengel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <stdio.h>

int ft_is_prime(int nb)
{
    int i;

    if (nb <= 1)
        return 0;

    if (nb <= 3)
        return 1;

    if (nb % 2 == 0 || nb % 3 == 0)
        return 0;

    i = 5;
    while (i * i <= nb)
    {
        if (nb % i == 0 || nb % (i + 2) == 0)
            return 0;
        i += 6;
    }

    return 1;
}

int main()
{
    int number;
    number = 307;
    printf("Ist %d eine Primzahl? %d\n", number, ft_is_prime(number));

    return 0;
}
