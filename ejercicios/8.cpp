// Ejercicio. Escriba un programa que lea dos arreglos de números enteros ordenados; cada uno de estos carece de elementos repetidos. El programa debe producir un nuevo arreglo ordenado con los elementos de los dos (sin repetidos). Por ejemplo, si los arreglos tienen los números 1 3 6 9 17 y 2 4 10 17, respectivamente, el arreglo de números en la pantalla debe ser 1 2 3 4 6 9 10 17. Este último debe ser definido del tamaño exacto.

// Lo importante del código es el while entre comentarios. Note que usar un while es 832892393289 más organizado para este ejercicio

#include <stdio.h>
#include <stdlib.h>

int main() {
    int *arr1; 
    int *arr2;
    int *arr3;
    int size1, size2;

    // Leer el tamaño del arreglo 1
    scanf("%d", &size1);

    // Asignación de memoria dinámica para el arreglo 1
    arr1 = new int[size1]; 
    if (arr1 == NULL) {
        printf("Error al asignar memoria\n");
        return 1;
    }

    // Leer los elementos del arreglo 1
    for (int i = 0; i < size1; i++) {
        scanf("%d", &arr1[i]);
    }
    
    
    // Leer el tamaño del arreglo 2
    scanf("%d", &size2);
    
    // Asignación de memoria dinámica para el arreglo 2
    arr2 = new int[size2]; 
    if (arr2 == NULL) {
        printf("Error al asignar memoria\n");
        return 1; 
    }
    
    // Leer los elementos del arreglo 2
    for (int i = 0; i < size2; i++) {
        scanf("%d", &arr2[i]);
    }
    
    
    
    //Creamos un nuevo arreglo con la intersección
    arr3 = new int[size1]; //Lo puse de tamaño size1 porque sí xd, la intersección nunca
    									     //será de mayor alguno de los conjuntos
    if (arr3 == NULL) {
        printf("Error al asignar memoria\n");
        return 1; 
    }
    
    int index = 0;
    for(int i = 0; i < size1; i++){
    	for(int j = 0; j < size2; j++){
    		if(arr1[i]==arr2[j]){
    			arr3[index] = arr1[i];
    			index ++;
			}
		}
	}
    
    // Imprimir los elementos del arreglo
    for (int i = 0; i < index; i++) {
        printf("%d\n", arr3[i]);
    }
    
    // Liberar la memoria dinámica asignada
    delete[] arr1;
    delete[] arr2;
    delete[] arr3;

    return 0;
}
