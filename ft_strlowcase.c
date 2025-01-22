/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sengel <sengel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/22 18:18:31 by sengel            #+#    #+#             */
/*   Updated: 2025/01/22 18:26:48 by sengel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <unistd.h>
#include <ctype.h>

char *ft_strlowercase(char *str){

    char *original_str = str;

    while (*str !='\0'){
        *str = tolower(*str);
        str++;
    }
    str = original_str;
    write(1, str, 20);
    write(1, "\n", 20);

    return original_str;

}


int main(){

    char str[20] = "abCdEFg";

    ft_strlowercase(str);

    return 0;
}
