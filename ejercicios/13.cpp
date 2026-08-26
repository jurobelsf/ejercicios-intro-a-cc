// Escribir un programa que lea dos enteros positivos a y b y muestre en pantalla los números múltiplos de 5 comprendidos entre a y b

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
	
	int a,b;
	
	printf("Hola!, ingresa 2 numeros enteros positivos:\n"); 
	//Como el ejercicio dice que pa los enteros *postivios*, 
	//no consideraremos al 0. Solo del 1 pa' lante
	scanf("%d", &a);
	scanf("%d", &b);
	
	int contador = 0;
	
	for(int i = a + 1; i<b; i++){  
	//Revisamos si si hay numeros multiplos de 5 entre a y b 
	//pa que saber qué tipo de mensaje mandar
		if(i%5==0){
			contador++;
		}
	}
	
	if(contador == 0){
		printf("No hay numeros multiplos de 5 entre %d y %d :(\n", a, b);
	} else{
		printf("Los numeros multiplos de 5 entre %d y %d son:\n", a, b);
		for(int i = a + 1; i<b; i++){
			if(i%5==0){
			printf("%d\n", i);	
			}
		}
	}
	
return 0;	
}
