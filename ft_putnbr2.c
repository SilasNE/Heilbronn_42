/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr2.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sengel <sengel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/27 15:30:08 by sengel            #+#    #+#             */
/*   Updated: 2025/01/27 16:04:55 by sengel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include<unistd.h>

int ft_putnbr(int nb){

    char c;

    if(nb < 0){

        write(1, "-", 1);
        nb = -nb;

    }

    if(nb > 9){

        ft_putnbr(nb / 10);

    }

    c = (nb % 10) + '0';

    write(1, &c , 1);

    return nb;

}

int main(){

 int number = 42;

    ft_putnbr(number);
    return 0;
}