// ejercicio: haga un programa que lea un número n múltiplo de 5 y generar la sucesión 5, 10, 15, 20, 25, 30, 35, ...,n. El programa debe validar que la entrada sea un múltiplo de 5 y sino mostrar un mensaje de error

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
	
	int n;
	
	printf("Hola!, ingresa un multipo de 5 mayor o igual a 5:\n");
	scanf("%d", &n);

	if(n % 5 == 0){
		for(int i = 5; i<=n; i+=5){
			printf("%d\n", i);
		}
	} else{
		printf("El numero que debes ingresar tiene que ser multiplo de 5 ._.");
	}
		
return 0;	
}
