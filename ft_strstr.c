/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sengel <sengel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/27 10:22:04 by sengel            #+#    #+#             */
/*   Updated: 2025/01/27 13:51:12 by sengel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <unistd.h>
#include <ctype.h>
#include <string.h>
#include <stdio.h>


char *ft_strstr(char *str, char *to_find){

    int i = 0;

       if (*to_find == '\0') {
        return str;
    }

    while(str[i] != '\0'){

        int j = 0;


     while(str[i + j] == to_find[j] && to_find[j] != '\0'){

         j++;
    }
        if (to_find[j] == '\0') {
            return &str[i];
        }
        i++;

    }

    return NULL;

}


int main(){

    char str[50] = "Hello World";

    char to_find[] = "World";

    
    char *result = ft_strstr(str, to_find);

    if (result != NULL) {
        printf("Resultat: %s\n", result);
    } else {
        printf("Nicht gefunden.\n");

    }
    
    return 0;
}
