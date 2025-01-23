/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sengel <sengel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/23 13:35:15 by sengel            #+#    #+#             */
/*   Updated: 2025/01/23 13:55:08 by sengel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include <unistd.h>

void print_hex(unsigned char c) {
    char hex[] = "0123456789abcdef";
    char buffer[2];

    buffer[0] = hex[c / 16];
    buffer[1] = hex[c % 16];
    write(1, buffer, 2);
}

void print_char(unsigned char c) {
    if (c >= 32 && c <= 126) {
        write(1, &c, 1);
    } else {
        write(1, ".", 1);
    }
}

void ft_print_memory(void *addr, unsigned int size) {
    unsigned char *ptr = (unsigned char *)addr;
    unsigned int i = 0;

    while (i < size) {
        // Hexadezimal-Adresse
        unsigned long addr_value = (unsigned long)(ptr + i);
        for (int j = 15; j >= 0; j--) {
            char c = "0123456789abcdef"[(addr_value >> (j * 4)) & 0xF];
            write(1, &c, 1);
        }
        write(1, ": ", 2);

        // Hexadezimalinhalt
        for (unsigned int j = 0; j < 16; j++) {
            if (i + j < size) {
                print_hex(ptr[i + j]);
            } else {
                write(1, "  ", 2);
            }
            if (j % 2 == 1) {
                write(1, " ", 1);
            }
        }

        // Druckbare Zeichen
        for (unsigned int j = 0; j < 16; j++) {
            if (i + j < size) {
                print_char(ptr[i + j]);
            }
        }
        write(1, "\n", 1);
        i += 16;
    }
}

int main() {
    char str[] = "Bonjour les aminches\n\tcoucou\ntu vas bien ?";
    ft_print_memory(str, sizeof(str) - 1);
    return 0;
}
