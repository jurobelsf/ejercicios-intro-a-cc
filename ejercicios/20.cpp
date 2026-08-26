// ejercicio. haga un programa que Lea un número entero positivo n y, usando ciclos, escribir un programa que calcule la suma de los cuadrados de los n primeros números enteros

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
	
	int n;
	int total = 0;
	
	printf("Hola!, ingresa un numero entero positivo:\n");
	scanf("%d", &n);
	
	for(int i = 1; i<=n; i++){
		int cuadrado = i*i;
	 	total += cuadrado;
	}
	
	printf("La suma de los cuadrados de los primeros %d enteros positivos 
	//es: %d", n, total);

return 0;	
}
