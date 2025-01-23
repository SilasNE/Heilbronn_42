/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sengel <sengel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/23 14:00:14 by sengel            #+#    #+#             */
/*   Updated: 2025/01/23 14:44:09 by sengel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <unistd.h>
#include <string.h>
#include <ctype.h>
#include <stdio.h>

int ft_strcmp(char *s1, char *s2) {
    while (*s1 && (*s1 == *s2)) {
        s1++;
        s2++;
    }
    return (unsigned char)*s1 - (unsigned char)*s2;
}

int main() {
    char str1[] = "Hallo";
    char str2[] = "Hallo Welt";
    
    int result1 = ft_strcmp(str1, str2);
    
    char buffer[20];
    snprintf(buffer, sizeof(buffer), "%d", result1);
    
    write(1, buffer, strlen(buffer));
    write(1, "\n", 1); 
    
    return 0;
}
