#include<unistd.h>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>


void ft_strrev(char *str){

    int len = strlen(str);

    int i;

    int j = len - 1;

    i = 0;

    while(i < j){

        char temp = str[i];

        str[i] = str[j];

        str [j] = temp;

        i++;
        j--;
    }
}


int main(){ 

    char str [] = "Hallo";

    ft_strrev(str);

    printf("Umgekehrt: %s\n", str);

    return 0;
}
