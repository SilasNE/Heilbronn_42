#include <stdlib.h>
#include <stdio.h>

void ft_advanced_sort_string_tab(char **tab, int(*cmp)(char *, char *)) {
    int i = 0;
    while (tab[i]) {
        int j = i + 1;
        while (tab[j]) {
            if (cmp(tab[i], tab[j]) > 0) {
                char *temp = tab[i];
                tab[i] = tab[j];
                tab[j] = temp;
            }
            j++;
        }
        i++;
    }
}

int ft_strcmp(char *s1, char *s2) {
    while (*s1 && *s2 && *s1 == *s2) {
        s1++;
        s2++;
    }
    return (*s1 - *s2);
}

int main() {
    char *tab[] = {"42", "Hello", "World", "C", "Programming", NULL};
    ft_advanced_sort_string_tab(tab, ft_strcmp);
    return 0;
}