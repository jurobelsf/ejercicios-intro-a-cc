// Ejercicio. Haga un programa que Encuentre la menor diferencia (en valor absoluto) entre dos elementos de un arreglo

#include <stdio.h>
#include <stdlib.h>

int diferencia_minima(int arr[], int size) {
    int min = abs(arr[0] - arr[1]); // Suponemos que el mínimo es la diferencia entre el primer y el segundo elemento
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            if (i != j && abs(arr[i] - arr[j]) < min) {
                min = abs(arr[i] - arr[j]);
            }
        }
    }
    return min;
}

int main() {
	
    int *arr;
    int size;
    scanf("%d", &size);
    
    arr = new int[size];
    
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }
    
    printf("%d\n", diferencia_minima(arr, size));
    
    delete[] arr;

    return 0;
}
