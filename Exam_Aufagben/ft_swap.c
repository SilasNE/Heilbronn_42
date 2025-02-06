#include <stdio.h>

void ft_swap (int *a, int *b){
    int swappie;

    swappie = *a;
    *a = *b;
    *b = swappie;
}


int main(){
    int a = 5;
    int b = 10;
    printf("Vor dem Swap: x = %d, y = %d\n", x, y);
    ft_swap(&a, &b);
    printf("Nach dem Swap: x = %d, y = %d\n", x, y);
    return 0;
}

