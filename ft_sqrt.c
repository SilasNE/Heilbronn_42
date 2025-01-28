/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sengel <sengel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/28 15:00:03 by sengel            #+#    #+#             */
/*   Updated: 2025/01/28 15:43:24 by sengel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int ft_sqrt(int nb) {
    if (nb < 0) {
        return 0;
    }

    int x = nb;
    int y = 1;

    while (x > y) {
        x = (x + y) / 2;
        y = nb / x;
    }

    if (x * x == nb) {
        return x;
    } else {
        return 0;
    }
}

int main() {
    int nb = 81;
    int resultat = ft_sqrt(nb);
    printf("Das Resultat ist: %d\n", resultat);
    return 0;
}
