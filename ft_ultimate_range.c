/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sengel <sengel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/29 14:26:43 by sengel            #+#    #+#             */
/*   Updated: 2025/01/29 14:46:57 by sengel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int ft_ultimate_range(int **range, int min, int max) {
    if (min >= max) {
        *range = NULL;
        return 0;
    }

    int size = max - min;
    *range = (int *)malloc(size * sizeof(int));
    if (*range == NULL) {
        return -1;
    }

    int i = 0;
    while (i < size) {
        (*range)[i] = min + i;
        i++;
    }

    return size;
}

int main() {
    int *range;
    int min = 5;
    int max = 10;
    int size = ft_ultimate_range(&range, min, max);

    if (size == -1) {
        printf("Speicher konnte nicht zugewiesen werden.\n");
        return 1;
    } else if (size == 0) {
        printf("Kein gültiger Bereich. Min sollte kleiner als Max sein.\n");
        return 1;
    }

    printf("Werte von %d bis %d:\n", min, max);
    int i = 0;
    while (i < size) {
        printf("%d\n", range[i]);
        i++;
    }

    free(range); // Speicher freigeben
    return 0;
}

