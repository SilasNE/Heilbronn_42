/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft)strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sengel <sengel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/23 10:52:41 by sengel            #+#    #+#             */
/*   Updated: 2025/01/23 11:33:06 by sengel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <ctype.h>
#include <string.h>
#include <stdio.h>


unsigned int ft_strlcpy(char *dest, char *src, unsigned int size){

    unsigned int i;

    if (size == 0){

    while (src[i] != '\0') {
            i++;
        }
        return i;
    }

    i = 0;
    while (src[i] != '\0' && i < size - 1) {
        dest[i] = src[i];
        i++;
    }

    dest[i] = '\0';  
    
    while (src[i] != '\0') {
        i++;
    }

    return i;
}


int main(){

    char src[] = "Speicher mich!";
    char dest[20];
    
    
    unsigned int size = sizeof(dest);

    unsigned int len = ft_strlcpy(dest, src, size);

    
    printf("Kopierter String: %s\n", dest);
    printf("Länge des Quellstrings: %u\n", len); 


    return 0;
}
