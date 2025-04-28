#include "exercises.h"
#include <stdio.h>

// -------------------------------
// Functions that return a single value
// -------------------------------

int calcSum(int arr[], int n)
{
    int suma = 0;
    for (int i = 0; i < n; i++) {
        suma = suma + arr[i];
    }
    return suma;
}

int findMax(int arr[], int n)
{
    int max = arr[0]; // primer elemento tomado como el máximo
        for (int i = 1; i < n; i++) {
            if (arr[i] > max) {
                max = arr[i];
            }
        }
        return max;
}


float calcAverage(int arr[], int n)
{
    int sum = 0;  
    for (int i = 0; i < n; i++) {
        sum =sum + arr[i];  
    }
    return (float)sum / n;
}

int countEvens(int arr[], int n)
{
    int Par = 0;  
    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 == 0) { 
            Par++; 
        }
    }
    return Par; 
}

int sumFirstLast(int arr[], int n)
{
    if (n == 0) {
        return 0;  
    }
    return arr[0] + arr[n - 1];  
}

int findMin(int arr[], int n)
{
    if (n == 0) {
        printf ("El arreglo está vacío\n");   
        }

    int min = arr[0];  // primer elemento tomado como el mínimo
    for (int i = 1; i < n; i++) {
        if (arr[i] < min) {  
            min = arr[i]; 
        }
    }
    return min;
}

int subtractArraysSum(int a[], int b[], int n)
{
    int sumaDiferencias = 0; 
    for (int i = 0; i < n; i++) {
        sumaDiferencias = sumaDiferencias + (a[i] - b[i]); 
    }

    return sumaDiferencias;  
}

int mergeArraysSum(int a[], int n1, int b[], int n2)
{
    int sumaTotal = 0; 

    // Primer arreglo
    for (int i = 0; i < n1; i++) {
        sumaTotal += a[i];
    }

    // Segundo arreglo
    for (int i = 0; i < n2; i++) {
        sumaTotal += b[i];
    }

    return sumaTotal; 
}

int productArray(int arr[], int n)
{
    int producto = 1;  // 1 es el elemento neutro de la multiplicación

    for (int i = 0; i < n; i++) {
        producto = producto * arr[i]; 
    }

    return producto;  
}

// -------------------------------
// Function that returns multiple values via pointer
// -------------------------------

void calcSumAverage(int arr[], int n, int *sum, float *average)
{
    *sum = 0;  

    for (int i = 0; i < n; i++) {
        *sum += arr[i];  
    }

    *average = (float) (*sum) / n;  
}
