#include <stdlib.h> 
#include <stdio.h>

char *ft_strdup(char *src) {
    int len = 0;
    while (src[len]) len++;

    char *dest = (char *)malloc(len + 1);
    if (!dest) return NULL;

    int i = 0;
    while (src[i]) {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0'; 
    return dest;
}

#include <stdio.h>
int main() {
    char *copy = ft_strdup("42 Heilbronn");
    printf("Kopie: %s\n", copy);
    free(copy);
    return 0;
}