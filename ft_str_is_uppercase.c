/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sengel <sengel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/22 15:25:44 by sengel            #+#    #+#             */
/*   Updated: 2025/01/22 15:51:37 by sengel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <ctype.h>

int ft_str_is_uppercase(char *str){

    int hasUppercase = 0;
    int hasNumeric = 0;

    while(*str != '\0'){

        if(isupper(*str)){
           hasUppercase = 1;
        }

        else{
          hasNumeric = 1;
        }
        str++;
    }
if (hasUppercase == 1){
    write(1, "1\n", 2);

}
if (hasNumeric == 1){
    write(1, "0\n", 2);

}
return 0;
}


int main(){

    char str[20] = "aaaAa";
    
    ft_str_is_uppercase(str);

    return 0;

}