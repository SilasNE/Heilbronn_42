/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sengel <sengel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/28 14:22:09 by sengel            #+#    #+#             */
/*   Updated: 2025/01/28 14:31:18 by sengel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<stdio.h>

int ft_recursive_power(int nb, int power){

    int result;

    result = 1;

    if(power < 0){
        return (0);
    }

    if (power == 0) {
        return (1);
    }

     return nb * ft_recursive_power(nb, power - 1);
}


int main(){

    int nb = 2;

    int power = 3;

    int resultat = ft_recursive_power(nb, power);

    printf("Das Resultat: %d\n", resultat);

    return 0;
}