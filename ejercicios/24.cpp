// ejercicio. Determine si un número es narcisista en base 10

#include <stdio.h>
#include <stdlib.h>
#include <math.h>  // Pa poder usar pow

int esNarcisista(int num) {
	
    int temp = num; 
    int num_digitos = 0;
    int suma = 0;

    // Primero, calculemos la cantidad de digitos
    while (temp != 0) {
        num_digitos++;
        temp = temp / 10;
    }

    // Calcula la suma de los digitos elevado a num_digitos
    
    temp = num;    
    // A ese man lo modificamos para el while de ahorita, 
    //entonces toca volverlo a setear con num
    
    while (temp != 0) {
        int digito = temp % 10;
        suma += pow(digito, num_digitos);
        temp = temp / 10;
    }

    // Verifica si el número es narcisista
    if (suma == num) {
        return 1; // Es narcisista
    } else {
        return 0; // No es narcisista
    }
}

int main(){
	
    int n;

    printf("Escriba un entero no negativo: ");
    scanf("%d", &n);
    
    if(esNarcisista(n)){
    	printf("%d es un numero narcicista en base 10 :)", n);
	} else {
		printf("%d NO un numero narcicista en base 10 :(", n);
	}
}


/*
Note par cosas interesantes:

- Fíjese en cómo utilizo la variable **temp**. En los 2 ciclos en que la utilizo, la inicializo como **num**. Y pues, realmente la función de temp es representar a num. Pero pues creo una variable diferente porque en el ciclo usted va a ir modificando a ese número, pero yo no quiero que num cambie de valor. Por eso pongo a temp, **es una variable temporal.** Y por eso me toca volver a settearla como num en el segundo ciclo
- **Mucho ojo con:**

```c
    while (temp != 0) {
        int digito = temp % 10;
        suma += pow(digito, num_digitos);
        temp = temp / 10;
    }
```

A primera vista, esto pareciera estar mal. Para que el while se deje de cumplir temp tendría que ser 0. Pero esto no va a pasar por más que lo dividamos muchas veces entre 10. Si acaso tendremos un número como 0,0000000000064, pero nunca llegaremos a 0, verdad?

- Resulta que no. **En C, cuando realizamos la división de dos enteros, el resultado es también un entero.** O sea, nosotros declaramos temp como un entero sioke. Y lo estamos dividiendo entre 10. Entonces la línea **temp = temp / 10;** es como decir **un_entero = un_entero / otro_entero**

Entonces es obvio que la división se hace entera. El **residuo** de esa división (que serían los decimales) **se descarta** 

- Entonces es re chimba porque el proceso de **temp = temp / 10,** para por ejemplo **temp = 1532,** haría que el número fuera: 1532, después 153, después 15, y después 1
*/
