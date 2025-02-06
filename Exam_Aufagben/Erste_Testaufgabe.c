#include<unistd.h>
#include<stdio.h>

int ft_recursive_factorial(int n){

    
    if (n == 0 || n == 1)
        return 1;

    return n * ft_recursive_factorial(n - 1);
}





int main(){

    int number = 5;

    int resultat = ft_recursive_factorial(number);

    printf("Resultat: %d\n", resultat);

    return 0;
}