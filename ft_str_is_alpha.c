/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sengel <sengel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/22 13:14:34 by sengel            #+#    #+#             */
/*   Updated: 2025/01/22 14:03:59 by sengel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include <ctype.h>


int ft_str_is_alpha(char *str){
    int hasDigit = 0;
    int hasAlpha = 0;

    while (*str != '\0'){
        if(isdigit(*str)){
            hasDigit = 1;
        }

        if(isalpha(*str)){
            hasAlpha = 1;
        }
        str++;
    }
if (hasDigit == 1){
    write(1, "0\n", 2);

}
if (hasAlpha == 1){
    write(1, "1\n", 2);

}
return 0;
}


int main(){

    char str[10] = "1234567890";
    
    ft_str_is_alpha(str);


    return 0;

}