/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_factorial.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sengel <sengel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/06 13:25:55 by sengel            #+#    #+#             */
/*   Updated: 2025/02/06 14:13:57 by sengel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_factorial(int nb){
    if(nb <= 1){
        return 1;
    }
    return nb * ft_factorial(nb -1);
}


int main(){
    int nummer = 5;
    int result = ft_factorial(nummer);
    printf("Ergebnis: %d\n", result);
    return 0;
}