/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sengel <sengel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/28 14:32:00 by sengel            #+#    #+#             */
/*   Updated: 2025/01/28 15:43:11 by sengel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include <unistd.h>
#include <stdio.h>

int ft_fibonacci(int index){


    if (index < 0) {
        return -1;

    }

    if(index == 0){
        return 0;
    }

    
    if (index == 1) {
        return 1; 
     }

     return ft_fibonacci(index - 1) + ft_fibonacci(index - 2);
}



int main(){

    int index = 5;

    int resultat = ft_fibonacci(index);

    printf("Das Resultat ist: %d\n", resultat);  

    return 0;
}