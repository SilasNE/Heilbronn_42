/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sengel <sengel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/29 13:48:11 by sengel            #+#    #+#             */
/*   Updated: 2025/01/29 14:44:59 by sengel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include<stdio.h>
#include <stdlib.h>


int *ft_range(int min, int max){

    if(min >= max){
        return NULL;
    }

    int size = max - min;

    int *range = (int *)malloc(size * sizeof(int));

    if(range == NULL){
        return 0;
    }

    int i = 0;

    while(i < size){
        range[i] = min + i;
        i++;
    }

    return range;
}


int main() {

    int min = 5;
    int max = 10;
    int *range = ft_range(min, max);

    if (range == NULL) {
        printf("Min ist größer oder gleich groß wie Max.\n");
        return 1;
    }

    printf("Werte von %d bis %d:\n", min, max);
    int i = 0;
    while (i < (max - min)) {
        printf("%d\n", range[i]);
        i++;
    }

    free(range); 
    return 0;

}