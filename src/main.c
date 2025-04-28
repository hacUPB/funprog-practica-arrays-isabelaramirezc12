#include <stdio.h>
#include "exercises.h"

int main(void)
{
    int numeros[] = {-2, 3};  
    int resultado = productArray(numeros, 2);

    printf("El producto es: %d\n", resultado);

    return 0;
}
