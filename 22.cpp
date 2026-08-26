// ejercicios. haga un programa que Lea dos enteros positivos a y b donde a<b. Escriba un programa que aleatoriamente seleccione un número entre a y b, y ponga al usuario a adivinar dicho número indicándole si el número a adivinar es mayor o menor que el ingresado

#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main(){
	
	//Bienvenida
	int a,b;

	printf("Escriba 2 enteros positivos a y b tal que a<b\n");
	printf("a: ");
	scanf("%d", &a);
	printf("b: ");
	scanf("%d", &b);

	//Creo la semilla
	int hora = time(NULL);
	srand(hora);
	
	//Creamos variable aleatoria
	int variable_aleatoria = a + (rand() % (b - a + 1));
	//printf("Variable_aleatoria es: %d\n", variable_aleatoria);   
	//Linea adicional q sirve para pruebas de escritorio
	
	// Ahora sí hacemos el core del código
	int intento;
	
	printf("Adivina que numero estoy pensando jeje. 
	//Es un numero entero entre a y b (con a y b incluidos)\n");
	scanf("%d", &intento);

	while(intento!=variable_aleatoria){
		if(intento < variable_aleatoria){
			printf("Nao Nao, el numero que estoy pensando es mayor\n");
			scanf("%d", &intento);
		}
		else if(intento > variable_aleatoria){
			printf("Nao Nao, el numero que estoy pensando es menor\n");
			scanf("%d", &intento);
		}
	}
	
	if(intento == variable_aleatoria){
		printf("Por fin!, has adivinado el numero :)\n");
	}

return 0;	
}
