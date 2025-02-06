#include <unistd.h>
#include <stdio.h>

int ft_strlen(char *str){
    int len = 0;

    while(str[len]){
        len++;
    }
    return len;
}

int main(){
    char *str = "Silas";
    int length = ft_strlen(str);
    printf("Die Länge des Strings ist: %d\n", length);
    return 0;
}