/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_ft_main.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sengel <sengel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/20 15:40:32 by sengel            #+#    #+#             */
/*   Updated: 2025/01/20 16:07:14 by sengel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include<unistd.h>
#include<stdio.h>
#include "ft_ultimate_ft.c"




int main(){
int value;
int *p1 = &value;
int **p2 = &p1;
int ***p3 = &p2;
int ****p4 = &p3;
int *****p5 = &p4;
int ******p6 = &p5; 
int *******p7 = &p6;
int ********p8 = &p7;
int *********p9 = &p8;

    ft_ultimate_ft(p9);

    printf("%d\n", value);
    return 0;
}