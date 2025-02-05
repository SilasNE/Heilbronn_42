/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sengel <sengel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 10:34:47 by sengel            #+#    #+#             */
/*   Updated: 2025/02/04 10:49:31 by sengel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

// Hilfsfunktion, um zu überprüfen, ob ein Zeichen ein Trennzeichen ist
int is_separator(char c, char *charset)
{
    while (*charset)
    {
        if (c == *charset)
            return 1;
        charset++;
    }
    return 0;
}

// Hilfsfunktion, um die Anzahl der Teilstrings zu zählen
int count_substrings(char *str, char *charset)
{
    int count = 0;
    int in_substring = 0;

    while (*str)
    {
        if (!is_separator(*str, charset) && !in_substring)
        {
            in_substring = 1;
            count++;
        }
        else if (is_separator(*str, charset))
        {
            in_substring = 0;
        }
        str++;
    }
    return count;
}

// Hilfsfunktion, um die Länge eines Teilstrings zu berechnen
int substring_length(char *str, char *charset)
{
    int len = 0;
    while (*str && !is_separator(*str, charset))
    {
        len++;
        str++;
    }
    return len;
}

// Hauptfunktion
char **ft_split(char *str, char *charset)
{
    // Anzahl der Teilstrings zählen
    int substrings_count = count_substrings(str, charset);

    // Speicher für das Array allozieren
    char **result = (char **)malloc((substrings_count + 1) * sizeof(char *));
    if (!result)
        return NULL;

    int i = 0;
    while (*str)
    {
        // Trennzeichen überspringen
        while (*str && is_separator(*str, charset))
            str++;

        // Teilstring extrahieren
        if (*str)
        {
            int len = substring_length(str, charset);
            result[i] = (char *)malloc((len + 1) * sizeof(char));
            if (!result[i])
                return NULL;

            // Teilstring kopieren
            int j = 0;
            while (j < len)
            {
                result[i][j] = *str;
                j++;
                str++;
            }
            result[i][j] = '\0'; // Null-Terminator hinzufügen
            i++;
        }
    }

    // Array mit NULL abschließen
    result[i] = NULL;
    return result;
}


#include <stdio.h>

int main()
{
    char *str = "Hello,world!This-is:a.test";
    char *charset = ",!-:.";
    char **result = ft_split(str, charset);

    for (int i = 0; result[i]; i++)
    {
        printf("%s\n", result[i]);
        free(result[i]); // Speicher freigeben
    }
    free(result); // Array freigeben
    return 0;
}