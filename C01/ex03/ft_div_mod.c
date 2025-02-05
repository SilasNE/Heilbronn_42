/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sengel <sengel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/21 10:58:29 by sengel            #+#    #+#             */
/*   Updated: 2025/01/21 12:47:51 by sengel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <unistd.h>


void ft_putnbr(int nb) {
    if (nb >= 10)
        ft_putnbr(nb / 10);
    char c = nb % 10 + '0';
    write(1, &c, 1);
}


void ft_div_mod(int a, int b, int *div, int *mod){

    *div = a / b;
    *mod = a % b;

    write(1, "Division: ", 10);
    ft_putnbr(*div);
    write(1, "\nModulus: ", 10);
    ft_putnbr(*mod);
    write(1, "\n", 1);
}

