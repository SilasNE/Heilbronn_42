/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strncopy.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sengel <sengel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/22 11:58:07 by sengel            #+#    #+#             */
/*   Updated: 2025/01/22 12:46:03 by sengel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char *ft_strncpy(char *dest, char *src, unsigned int n);

int main() {
    char src[] = "Hallo, Welt!";
    char dest[50]; 


    ft_strncpy(dest, src, 10);

    printf("Quell-String: %s\n", src);
    printf("Ziel-String: %s\n", dest);

    return 0;
}

char *ft_strcpy(char *dest, const char *src, unsigned int n) {
    char *original_dest = dest;

 
    while (*src != '\0') {
        *dest = *src;
        dest++;
        src++;
    }
    *dest = '\0'; 

    return original_dest;
}