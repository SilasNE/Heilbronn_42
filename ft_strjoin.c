/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sengel <sengel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/29 14:47:29 by sengel            #+#    #+#             */
/*   Updated: 2025/01/29 16:23:38 by sengel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>
#include <stdio.h>

char *ft_strjoin(int size, char **strs, char *sep) {
    if (size == 0) {
        char *empty_str = (char *)malloc(1);
        if (empty_str == NULL) {
            return NULL;
        }
        empty_str[0] = '\0';
        return empty_str;
    }

    int total_len = 0;
    int i = 0;
    while (i < size) {
        total_len += strlen(strs[i]);
        i++;
    }
    total_len += (size - 1) * strlen(sep);

    char *result = (char *)malloc(total_len + 1);
    if (result == NULL) {
        return NULL;
    }

    i = 0;
    int pos = 0;
    while (i < size) {
        int j = 0;
        while (strs[i][j]) {
            result[pos] = strs[i][j];
            pos++;
            j++;
        }
        if (i < size - 1) {
            j = 0;
            while (sep[j]) {
                result[pos] = sep[j];
                pos++;
                j++;
            }
        }
        i++;
    }
    result[pos] = '\0';

    return result;
}

int main() {
    char *strs[] = {"Hallo", "Welt", "!", " Ich heiße Silas:)"};
    char *sep = " ";
    int size = 4;

    char *result = ft_strjoin(size, strs, sep);
    if (result != NULL) {
        printf("%s\n", result);
        free(result); 
    } else {
        printf("Speicher konnte nicht zugewiesen werden.\n");
    }

    return 0;
}
