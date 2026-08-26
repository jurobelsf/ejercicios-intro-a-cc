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


/*

Veamos cosas interesantes de este código

1. Lo del valor absoluto nos simplificó varias cosas xdxd
2. **Podemos hacer funciones que reciban como parámetro un array!!, literal ahí lo único fue poner int arr[] como parámetro y sha. Y en java también!!**

**NOTA IMPORTANTE:**

- **En C, no se puede crear una función que retorne un arreglo**
- **En Java sí**, y lo único que tiene que hacer para eso es poner int[] antes del nombre de la función. Ejemplo:

```java
public static int[] eliminarRepetidos(int[] array1, int size) {
```

Y de paso ahí ve cómo hace que la función reciba como parámetro un arreglo

*/
