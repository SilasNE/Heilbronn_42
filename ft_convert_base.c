/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sengel <sengel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/29 16:12:13 by sengel            #+#    #+#             */
/*   Updated: 2025/01/29 16:24:06 by sengel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>
#include <stdio.h>

// Hilfsfunktionen zur Überprüfung der Basen
int is_valid_base(char *base);
int char_to_value(char c, char *base);
char value_to_char(int value, char *base);

int is_valid_base(char *base) {
    int len = strlen(base);
    if (len < 2) return 0;
    for (int i = 0; i < len; i++) {
        if (base[i] == '+' || base[i] == '-' || base[i] <= ' ' || base[i] > '~') return 0;
        for (int j = i + 1; j < len; j++) {
            if (base[i] == base[j]) return 0;
        }
    }
    return 1;
}

int char_to_value(char c, char *base) {
    for (int i = 0; base[i] != '\0'; i++) {
        if (base[i] == c) return i;
    }
    return -1;
}

char value_to_char(int value, char *base) {
    return base[value];
}

// Funktion zur Konvertierung von einer Basis in eine Dezimalzahl
int ft_atoi_base(char *str, char *base) {
    int base_len = strlen(base);
    int value = 0;
    int sign = 1;

    // Leerzeichen überspringen
    while (*str == ' ' || (*str >= 9 && *str <= 13)) str++;
    // Vorzeichen prüfen
    if (*str == '-' || *str == '+') {
        if (*str == '-') sign = -1;
        str++;
    }

    int base_val;
    while ((base_val = char_to_value(*str, base)) != -1) {
        value = value * base_len + base_val;
        str++;
    }

    return value * sign;
}

// Funktion zur Konvertierung von einer Dezimalzahl in eine Zielbasis
char *ft_itoa_base(int nbr, char *base) {
    int base_len = strlen(base);
    int temp = nbr;
    int size = (nbr <= 0) ? 1 : 0;

    while (temp) {
        temp /= base_len;
        size++;
    }

    char *result = (char *)malloc(size + 1);
    if (result == NULL) return NULL;

    result[size] = '\0';
    if (nbr < 0) result[0] = '-';

    while (size-- > (nbr < 0 ? 1 : 0)) {
        result[size] = value_to_char(abs(nbr % base_len), base);
        nbr /= base_len;
    }

    return result;
}

// Hauptfunktion zur Konvertierung von einer Basis in eine andere
char *ft_convert_base(char *nbr, char *base_from, char *base_to) {
    if (!is_valid_base(base_from) || !is_valid_base(base_to)) return NULL;

    int decimal_value = ft_atoi_base(nbr, base_from);
    printf("Zwischenergebnis in Dezimal: %d\n", decimal_value); // Debugging-Ausgabe

    char *result = ft_itoa_base(decimal_value, base_to);
    printf("Endergebnis in Zielbasis: %s\n", result); // Debugging-Ausgabe
    return result;
}

// Beispiel für die Verwendung der Funktionen
int main() {
    char nbr[] = "101";
    char base_from[] = "01";
    char base_to[] = "0123456789ABCDEF";

    char *result = ft_convert_base(nbr, base_from, base_to);

     if (result != NULL) { printf("Konvertiertes Ergebnis: %s\n", result);

     free(result); } else { printf("Ungültige Basis oder Fehler bei der Konvertierung.\n");

      } 
      return 0; 
     }