// Ejercicio. Haga un programa que lea el tamaño del arreglo, lea uno a uno sus elementos e imprímalo en orden inverso

#include <stdio.h> 
#include <stdlib.h> 
 
int main() { 
    int *arr; 
    int size; 
 
    // Leer el tamaño del arreglo 
    scanf("%d", &size); 
 
    // Asignación de memoria dinámica para el arreglo 
    arr = new int[size]; 
    if (arr == NULL) { 
        printf("Error al asignar memoria\n"); 
        return 1; //!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!! 
    } 
 
    // Leer los elementos del arreglo 
    for (int i = 0; i < size; i++) { 
        scanf("%d", &arr[i]); 
    } 
 
    // Imprimir los elementos del arreglo 
    for (int i = size-1; i > -1; i--) { 
        printf("%d\n", arr[i]); 
    } 
 
    // Liberar la memoria dinámica asignada 
    delete[] arr; 
 
    return 0; 
}
