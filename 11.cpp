// Ejercicio. Haga un programa que Dado un número n, imprima el triángulo de Pascal asociado a ese númerolea el tamaño del arreglo, lea uno a uno sus elementos e imprima todos los números negativos en el orden del arreglo


#include<stdio.h>
#include<stdlib.h>

void crear(int* matrix[], int n){  //No le ponemos el parámetro de "m" porque es una matriz cuadrada 
    for(int i=0;i<n;i++){
        matrix[i] = new int[n];
    }
}


void llenar(int* matrix[], int n){
    for(int i=0;i<n;i++){ //Este doble for es el de toda la vida...
        for(int j=0;j<=i;j++){ //PERO, 1.
            if(j==0 || j==i){  //2.
                matrix[i][j] = 1; 
            } else{
                matrix[i][j] = matrix[i-1][j-1] + matrix[i-1][j]; //3. 
            }
        }
	}
}

void imprimir(int* matrix[], int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            printf("%d",matrix[i][j]);
            if(i>j){ //4.
                printf(" "); 
            }
         }
        printf("\n"); //Después de imprimir cada fila, se añade un salto de línea 
        }
	}

int main(){  //Para llamar todas las funciones ponemos un n+1. Por qué? Mire los ejemplos y verá que siempre
			//que se pone n la matriz es de dimensión n+1xn+1

    int n;
    scanf("%d",&n);
    
    int* matrix[n+1];
    
    crear(matrix,n+1);
    llenar(matrix,n+1);
    imprimir(matrix,n+1);
    
    return 0;
}

/*
1. Lo único que cambia respecto a recorrer una matriz normal es lo de **j<=i.** Esto puede sonar confuso, pero lo único que me dice es que **el número de la columna no puede ser mayor al número de la fila.** Y pues nosotros solo queremos **el triángulo de la matriz, no la matriz completa**. Entonces por eso tiene sentido que solo pidamos la parte de la matriz que va cuando  j<=i se cumple. Si quiere vea ejemplos xd, ahí es claro que todos los elementos del triangulo cumplen que j<=i
2. Eso de que **j==0 || j==i** se lee como, “siempre que tengamos la primera columna, o, que tengamos la diagonal de la matriz… imprima 1”. Y pues lol xd, siempre la matriz tiene esa condición. La primera columna es 1 y la diagonal es de 1´s. 
3. No le ponga mucho cuidado a esto xd, simplemente es la forma geométrica de ver cómo se construye. Si quiere vea los ejemplos pa ver que se cumple
4. Esa condición es importante. La salida esperada pide que todos los números **se impriman con un espacio**… excepto el último número de cada fila. Ahí es dónde entra esa condición. Si se fija, **i >j** (que la fila sea mayor a la columna) se cumple para todo el triángulo de pascal… **excepto en la diagonal, cuando i==j**. Y pues ahí es precisamente donde **no** debo poner los espacio
*/
