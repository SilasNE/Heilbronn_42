/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sengel <sengel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/21 12:52:52 by sengel            #+#    #+#             */
/*   Updated: 2025/01/21 13:06:19 by sengel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>


void ft_putnbr(int nb) {
    if (nb >= 10)
        ft_putnbr(nb / 10);
    char c = nb % 10 + '0';
    write(1, &c, 1);
}


void ft_ultimate_div_mod(int *a, int *b){
    int div = *a / *b;
    int remain = *a % *b;
    *a = div; 
    *b = remain;



    write(1, "Division: ", 10);
    ft_putnbr(div);
    write(1, "\nModulus: ", 10);
    ft_putnbr(remain);
    write(1, "\n", 1);
}
