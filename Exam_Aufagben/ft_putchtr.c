#include <unistd.h>

void ft_putchar(char c){
    write(1, &c, 1);
}
int main(){
    char *name = "Silas";

    while(*name != '\0'){
        ft_putchar(*name);
        name++;
    }
    return 0;
}