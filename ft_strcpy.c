/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sengel <sengel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/22 11:04:20 by sengel            #+#    #+#             */
/*   Updated: 2025/01/22 12:43:40 by sengel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>


char *ft_strcpy(char *dest, const char *src);

int main() {
    char src[] = "Hallo, Welt!";
    char dest[50]; 


    ft_strcpy(dest, src);

    printf("Quell-String: %s\n", src);
    printf("Ziel-String: %s\n", dest);

    return 0;
}

char *ft_strcpy(char *dest, const char *src) {
    char *original_dest = dest;

 
    while (*src != '\0') {
        *dest = *src;
        dest++;
        src++;
    }
    *dest = '\0'; 

    return original_dest;
}
