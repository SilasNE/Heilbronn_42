/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_capitalize.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sengel <sengel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/22 18:34:33 by sengel            #+#    #+#             */
/*   Updated: 2025/01/23 10:50:53 by sengel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <ctype.h>
#include <string.h>


char *ft_strcapitalize(char *str){

    int i = 0;
    int in_word = 0;

    while(str[i] != '\0'){
        if(!in_word && isalpha(str[i])){
            str[i] = toupper(str[i]);
             in_word = 1;
        }
        else if (isspace(str[i])){
            in_word = 0;

        }

        i++;
    }
return str;
}



int main(){

    char str[] = "hallo meine lieben!";

    ft_strcapitalize(str);

    write(1, str, strlen(str));

    return 0;
}