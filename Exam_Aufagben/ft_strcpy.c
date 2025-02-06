/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sengel <sengel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/06 13:27:01 by sengel            #+#    #+#             */
/*   Updated: 2025/02/06 14:14:17 by sengel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char *ft_strcpy(char *dest, char *src){
    int i = 0;
    while(src[i]){
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
    return dest;
}


int main(){
    char src [] = "Silas";
    char dest [6];
    char *result = ft_strcpy(dest, src);
    printf("Kopie: %s\n", result);
    return 0;
}