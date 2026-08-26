// Ejercicio. Haga un programa que Encuentre el segundo elemento más grande en un arreglo.

#include <stdio.h>
#include <stdlib.h>

int main() {
    int *arr;
    int size;
    int max;

    // Leer el tamaño del arreglo
    scanf("%d", &size);

    // Asignación de memoria dinámica para el arreglo
    arr = new int[size];
    if (arr == NULL) {
        printf("Error al asignar memoria\n");
        return 1;
    }

    // Leer los elementos del arreglo
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    // Encontrar el valor máximo en el arreglo
    max = arr[0]; // Inicializar el máximo con el primer elemento del arreglo
    for (int i = 1; i < size; i++) {
        if (arr[i] > max) {
            max = arr[i]; // Actualizar el máximo si se encuentra un valor mayor
        }
    }
    
    int primer_mayor = max;
    
    max = arr[0]; // Inicializar el máximo con el primer elemento del arreglo
    for (int i = 1; i < size; i++) {
        if (arr[i] > max && arr[i] != primer_mayor) {
            max = arr[i]; // Actualizar el máximo si se encuentra un valor mayor
        }
    }

	

    // Imprimir el valor máximo
    printf("%d\n", max);

    // Liberar la memoria dinámica asignada
    delete[] arr;

    return 0;
}
