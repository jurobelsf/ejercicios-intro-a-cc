// Escribir un programa que pida un número y si el que se introduce por el teclado es menor de 100 que vuelva a solicitarlo hasta que se ingrese un valor mayor o igual a 100

#include <stdio.h>
#include <stdlib.h>

int main(){
	
	float n;
	
	printf("Hola!, ingresa un numero cualquiera:\n");
	scanf("%f", &n);

	while(n<100){
		printf("Ingresa otro ;)\n");
		scanf("%f", &n);
	}
	
	printf("Por fin!, el numero tenia que ser menor a 100 pa que se lo dejara de pedir xd");
	
return 0;	
}
