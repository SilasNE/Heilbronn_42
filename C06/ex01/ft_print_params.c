/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sengel <sengel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/29 11:08:07 by sengel            #+#    #+#             */
/*   Updated: 2025/01/29 11:41:10 by sengel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main(int argc, char **argv) {
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
