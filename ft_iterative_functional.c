/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_functional.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sengel <sengel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/28 11:41:31 by sengel            #+#    #+#             */
/*   Updated: 2025/01/28 14:05:31 by sengel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include<unistd.h>
#include<stdio.h>


int ft_iterative_factorial(int nb){

    int result;

    result = 1;

    if(nb < 0){
        return(0);
    }

    if(nb == 0 || nb == 1){
        return(1);
    }

    if(nb > 1){

        while(nb != 0){
        result *= nb;
        nb--;
        }
     }

    return result;
}



int main(){

    int nb = 5;

    int result = ft_iterative_factorial(nb);

    printf("Die Zahl ist: %d\n", result);

    return 0;
}