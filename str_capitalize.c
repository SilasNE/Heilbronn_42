/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_capitalize.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sengel <sengel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/22 18:34:33 by sengel            #+#    #+#             */
/*   Updated: 2025/01/22 18:45:09 by sengel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <ctype.h>

int ft_str_is_lowercase(char *str){

    int hasLowercase = 0;
    int hasNumeric = 0;

    while(*str != '\0'){

        if(islower(*str)){
           hasLowercase = 1;
        }

        else{
          hasNumeric = 1;
        }
        str++;
    }
if (hasLowercase == 1){
    write(1, "1\n", 2);

}
if (hasNumeric == 1){
    write(1, "0\n", 2);

}
return 0;
}


int main(){

    char str[20] = "aaaAa";
    
    ft_str_is_lowercase(str);

    return 0;

}