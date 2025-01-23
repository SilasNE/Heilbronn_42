/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sengel <sengel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/23 14:59:06 by sengel            #+#    #+#             */
/*   Updated: 2025/01/23 16:05:34 by sengel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include <string.h>
#include <ctype.h>
#include <stdio.h>



char *ft_strcat(char *dest, char *src){

    char *dest_ptr = dest;

        while (*dest_ptr != '\0') {
        dest_ptr++;
    }
    
    while (*src != '0'){
        *dest_ptr = *src;
        dest_ptr++;
        src++;
    }

    *dest_ptr = '\0';

    return dest;
}



int main(){

    char dest[50] = "Hallo ";

    char src[] = "Welt!";

    ft_strcat(dest, src);

    printf("Resultat: %s\n", dest);


    return 0;
}