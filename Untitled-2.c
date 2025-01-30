
#include <unistd.h>



void ft_putnbr(int nb){


if( nb >= 10){

    ft_putnbr(nb / 10);

}

char c = nb % 10 + '0';

write(1, &c, 1);
}



int main(){

    int i = 142;

    ft_putnbr(142);

    return 0;
}