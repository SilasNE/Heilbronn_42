#include <stdio.h>
#include <unistd.h>

int ft_array_sum(int *arr, int size)
{
    int sum = 0;  
    int i = 0;   

    while (i < size)  
    {
        sum += arr[i];  
        i++;            
    }

    return sum;  
}
int main(void)
{
    int arr[] = {1, 2, 3, 4, 5}; 
    int size = sizeof(arr) / sizeof(arr[0]); 
    int sum = ft_array_sum(arr, size);  

    printf("Summe der Array-Elemente: %d\n", sum); 
    return 0;
}