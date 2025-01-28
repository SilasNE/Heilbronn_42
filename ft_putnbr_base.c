/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Untitled-1                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sengel <sengel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/28 10:32:08 by sengel            #+#    #+#             */
/*   Updated: 2025/01/28 10:32:08 by sengel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<stdio.h>
#include<string.h>
#include<ctype.h>


void ft_putnbr_base(int nbr, char *base){

    int i;

    int j;


}



int main() {

    ft_putnbr_base(-1234, "0123456789ABCDEF");

    write(1, "\n", 1);

    ft_putnbr_base(1234, "01");

    write(1, "\n", 1);

    ft_putnbr_base(1234, "poneyvif");

    write(1, "\n", 1);

    return 0;

}