// Escribir un programa que calcule la media de números introducidos por el teclado hasta que el número ingresado sea cero (la media no debe incluir el cero).

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
	
	float n;
	float suma = 0;
	int contador = 0;
	
	printf("Este programa calcula el promedio de todos los numeros que me des. 
	//Cuando quieras dejar de introducir numeros tendras que darme el numero 0\n");
	printf("Ingresa un numero cualquiera (0 para salir): ");
	scanf("%f", &n);
	
	while(n !=0){
		
		suma += n;
		contador++;
		
		printf("Ingresa un numero cualquiera (0 para salir): ");
		scanf("%f", &n);
	}
	
	float media = suma/contador;
	
	printf("El promedio de los numeros que me diste (sin incluir el 0) es %f", media);
	
return 0;	
}
