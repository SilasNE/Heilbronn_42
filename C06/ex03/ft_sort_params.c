/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sengel <sengel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/29 11:42:02 by sengel            #+#    #+#             */
/*   Updated: 2025/01/29 13:20:24 by sengel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <string.h>

void sort_arguments(int argc, char **argv) {
    if (argc > 1) {
        int i = 1;
        while (i < argc - 1) {
            int j = i + 1;
            while (j < argc) {
                if (strcmp(argv[i], argv[j]) > 0) {
                    char *temp = argv[i];
                    argv[i] = argv[j];
                    argv[j] = temp;
                }
                j++;
            }
            i++;
        }
    }
}

int main(int argc, char **argv) {
    sort_arguments(argc, argv);

    int i = 1;  
    while (i < argc) {
        char *arg = argv[i];
        int len = 0;
        while (arg[len] != '\0') {
            len++;
        }
        write(1, arg, len);
        write(1, "\n", 1);
        i++;
    }
    return 0;
}
