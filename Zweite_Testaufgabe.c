#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>  
#include<string.h> 



char *ft_strdup(const char *s){

    size_t len = strlen(s);
    char *copy = (char*)malloc(len + 1);

    if(copy == NULL){
        return NULL;
    }

    size_t i = 0;

    while (i <=len){
        copy[i] = s[i];
        i++;
    }

    return copy;

}
    



int main(){

    char *original = "Hallo Welt";
    char *duplikat = ft_strdup(original);

    printf("Das Original: %s\n", original);

    printf("Das Duplikat: %s\n", duplikat);

    free(duplikat);

    return 0;
}