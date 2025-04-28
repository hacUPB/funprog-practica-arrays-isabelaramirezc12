#include <stdio.h>
#include "exercises.h"

int main(void)
{
    int sum;
    float avg;
    
    int arr[] = {0, 0, 0}; 
    int n = sizeof(arr) / sizeof(arr[0]);  
    
    calcSumAverage(arr, n, &sum, &avg);

    printf("La suma es: %d\n", sum);
    printf("El promedio es: %.2f\n", avg);

    return 0;
}
