/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_in_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sengel <sengel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/22 10:29:44 by sengel            #+#    #+#             */
/*   Updated: 2025/01/22 14:12:39 by sengel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


void ft_sort_int_tab(int *tab, int size)
{
    int swapped;
    int i;
    int temp ;

    swapped = 1;
    while (swapped) {
        swapped = 0;
        i = 0;
        while (i < size - 1) {
            if (tab[i] > tab[i + 1])
            {
                temp = tab[i];
                tab[i] = tab[i + 1];
                tab[i + 1] = temp;
                swapped = 1;
            }
            i++;
        }
        size--; 
    }
}
