/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sengel <sengel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/29 13:23:32 by sengel            #+#    #+#             */
/*   Updated: 2025/01/29 14:10:33 by sengel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

char *ft_strdup(char *src) {
    int len = 0;
    while (src[len] != '\0') {
        len++;
    }

    char *dup = (char *)malloc((len + 1) * sizeof(char));
    if (dup == NULL) {
        return NULL;
    }

    int i = 0; 
    while (i <= len) {
        dup[i] = src[i];
        i++;
}

    return dup;
}

int main() {
    char *original = "Hallo, Welt!";
    char *duplicate = ft_strdup(original);

    if (duplicate == NULL) {
        printf("Speicher konnte nicht zugewiesen werden.\n");
        return 1;
    }

    printf("Original: %s\n", original);
    printf("Duplikat: %s\n", duplicate);

    free(duplicate); 

    return 0;
}
