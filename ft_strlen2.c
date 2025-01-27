/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen2.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sengel <sengel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/27 14:06:58 by sengel            #+#    #+#             */
/*   Updated: 2025/01/27 14:50:51 by sengel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <unistd.h>
#include <stdio.h>


int ft_strlen(char *str){

    int i = 0;

    while(str[i] != '\0'){
        i++;
    }

    return i;
}



int main(){

    char str[50] = "Hallo Welt";

    int length = ft_strlen(str);

    printf("Reslutat: %d", length);

    return 0;
}