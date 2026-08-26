// Escribir un programa que lea un número entero n y muestre en pantalla los números pares entre 1 y n

#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int numero;
	
	printf("Hola!, ingresa un numero entero:\n");
	scanf("%d", &numero);
	
	if(numero > 2){
		
		printf("Los numeros pares entre 1 y %d son:\n", numero);
		
		for(int i = 2; i < numero; i += 2){
			printf("%d\n", i);
		}
	} else if(numero < 0){
	
		printf("Los numeros pares entre %d y 1 son:\n", numero);
		
		for(int i = 0; i > numero; i -= 2){ 
			printf("%d\n", i);
		}
	} else if(numero == 0 || numero == 1 || numero == 2){      
	//Estos son los números problematicos, donde no hay pares entre ellos
		printf("No hay numeros pares entre 1 y %d :(\n", numero);
	} 
	
return 0;	
}
