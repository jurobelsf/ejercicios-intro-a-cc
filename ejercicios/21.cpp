// Escribir un programa que escriba los números comprendidos entre 1 y 1000. El programa escribirá en la pantalla los números en grupos de 20, solicitando al usuario si quiere o no continuar visualizando el siguiente grupo de números

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main(){
	
	printf("Este programa imprimira los numeros del 1 al 1000 en grupos de a 20 numeros:\n");
	
	int comienzo = 1, stop = 20; 
	char respuesta;
	bool nuevo_grupo;
		
	//Primeros 20 numeros:
	for(int i = comienzo; i<=stop; i++){
		printf("%d\n", i);
	}
		
	//Primera vez que le pregunto:
	printf("Presiona Enter para ver el proximo grupo: ");
    respuesta = getchar();
	
	if(respuesta == '\n'){
		comienzo += 20;
		stop += 20;
		nuevo_grupo = true;
	} else{
		nuevo_grupo = false;
	}

	//Y de ahí pa alla automatizado
	for(int a = 20; nuevo_grupo; a += 20){
		if(stop < 1000){
			
			for(int i = comienzo; i<=stop; i++){
				printf("%d\n", i);
			}
		
			printf("Presiona Enter para ver el proximo grupo: ");
        	respuesta = getchar();
		
			if(respuesta == '\n'){
				comienzo += 20;
				stop += 20;
				nuevo_grupo = true;
			} else{
				nuevo_grupo = false;
			}
		} else { //Ese else es clave porque se ejecuta exactamente cuando stop == 1000. 
		//Eso será cuando imprima
//los últimos 20 y después de eso quiero que pare. Entonces hago una función 
//adicional para que 
//los imprima y de un mensaje de cierre
			for(int i = comienzo; i<=stop; i++){  //Imprimo los ultimos 20
				printf("%d\n", i);
			}
			printf("Ya acabaste los numeros xd. Espero t haya gustado el programa uwu"); 
			//Mensaje de cierre
			nuevo_grupo = false;
		}
	}

return 0;	
}
