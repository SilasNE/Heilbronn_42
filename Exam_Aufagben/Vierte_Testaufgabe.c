#include<unistd.h>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>


int ft_recursive_strlen(char *str){

    if (*str == '\0'){
        return 0;
    }

    return 1 + ft_recursive_strlen(str +1);
}


int main(){

    char *str = "Hallo Welt";

    int len = ft_recursive_strlen(str);

    printf("Länge: %d\n", len);

    return 0;
}









