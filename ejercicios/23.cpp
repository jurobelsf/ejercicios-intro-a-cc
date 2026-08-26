// haga un programa que Lea dos enteros positivos a y b. Escriba un programa que imprima los valores de la sucesión de Fibonacci entre a y b

#include <stdio.h>
#include <stdlib.h>

// Definimos fibonacci de forma recursiva
int fibonacci(int n){
    if(n <= 1){
        return n;
    } else {
        return fibonacci(n-1) + fibonacci(n-2);
    }    
}

int main(){
    int a, b;

    printf("Escriba 2 enteros positivos a y b tal que a < b\n");
    printf("a: ");
    scanf("%d", &a);
    printf("b: ");
    scanf("%d", &b);

    for(int i = 0; ; i++){     //Note que dejamos el segundo parámetro vacío :0
        int f_de_n = fibonacci(i);

        if(f_de_n > b) {
            break;          // Salimos del bucle si f_de_n es mayor que b
        }

        if(f_de_n > a && f_de_n < b){
            printf("%d\n", f_de_n);
        }
    }

    return 0;    
}

/*
Note que:

- Definimos a fibonacci de forma **recursiva**. Eso literal lo tomamos tal cual de un código de python que habíamos hecho para los ejercicios de uncode. Recuerde que tambien hay otra forma de hacer fibonacci a punta de ifs
- El **break** es algo nuevo del código. No significa más que (en el contexto de un if que está dentro de un **loop**) **romper (break xd) el loop**
- Usted se preguntará, por qué dejamos el segundo parámetro vacío???? Simple, porque **ahí todavía** no quiero decir cuál es la condición de finalización del loop. Y es que nea, usted cómo podría una condición de finalización ahí??. Decir que hasta que i < b? Esto sería incorrecto, porque yo no quiero saber **el último número de fibonacci que sea menor a b**

Piense que fibonacci es, literalmente, una función. **Toma un número i, y su imagen es el i-esimo número de fibonacci.** Entonces ahora sí, pille que yo no quiero ver que i sea menor a b, si no que **f_n(i) sea menor a b.** 

- Entonces ajá, esa condición no está sobre i si no sobre **la imagen de i bajo la función fibonacci**

Por eso es que no tiene sentido colocar la condición ahí, porque **f_de_n** es una variable que se define en el cuerpo del for. Entonces el truco es, no ponerle ahí la condición de finalización, pero sí se la pongo **(con el break!!!)** dentro del cuerpo. **La función de ese primer if es darle un stop al for**

- Y ya la del segundo if es que, si el n-esimo nuero de fibonacci (o sea, alguna imagen de la función fibonacci) es mayor a a y menor a b, entonces se imprima

*/
