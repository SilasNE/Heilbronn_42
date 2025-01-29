/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sengel <sengel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/29 11:20:09 by sengel            #+#    #+#             */
/*   Updated: 2025/01/29 11:41:30 by sengel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main(int argc, char **argv) {
    int i = argc - 1;  // Wir beginnen bei argc - 1, um die Argumente rückwärts anzuzeigen
    while (i > 0) {  // Wir überspringen argv[0], daher laufen wir bis i > 0
        char *arg = argv[i];
        int len = 0;
        while (arg[len] != '\0') {
            len++;
        }
        write(1, arg, len);
        write(1, "\n", 1);
        i--;
    }
    return 0;
}
