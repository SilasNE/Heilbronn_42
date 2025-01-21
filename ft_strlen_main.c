/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_main.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sengel <sengel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/21 14:40:57 by sengel            #+#    #+#             */
/*   Updated: 2025/01/21 15:38:24 by sengel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include"ft_strlen.c"

void ft_putnbr(int n) { 
    if (n >= 10) {
         ft_putnbr(n / 10);
     } 
     char c = n % 10 + '0';
      write(1, &c, 1);
}

int main(){


    char string[] = "1234567890";
    int length = ft_strlen(string);

    write(1, string, length);

    ft_putnbr(length);

    return 0;

}
  