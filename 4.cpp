// Ejercicio. Haga un programa que Lea el tamaño del arreglo, lea uno a uno sus elementos e imprima el promedio y la suma de sus elementos.

#include <stdio.h> 
#include <stdlib.h> 
 
int main() { 
    int *arr; 
    int size; 
    int suma = 0; 
    int promedio; 
 
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
    for (int i = 0; i < size; i++) { 
    	 
			suma = suma + arr[i]; 
         
    } 
 
	promedio = suma/size; 
 
	printf("%d\n", suma); 
	printf("%d\n", promedio); 
 
    // Liberar la memoria dinámica asignada 
    delete[] arr; 
 
    return 0; 
}
