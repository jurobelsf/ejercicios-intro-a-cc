// Haga un programa que lea un entero positivo n. Imprimir los n primeros enteros positivos en forma descendente

#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int n;
	
	printf("Hola!, ingresa un entero positivo:\n");
	scanf("%d", &n);

	for(int i = n; i >= 1; i--){
		printf("%d\n", i);
	}
	
return 0;	
}
