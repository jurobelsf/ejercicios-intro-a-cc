// haga un programa que Lea un número entero n y, usando ciclos, generar la sucesión: 1, 5, 3, 7, 5, 9, 7,..., n.

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
	
	int n;
	int iterador = 2;
	int incremento;

	printf("Hola! ingresa un numero entero mayor a 0:\n");
	scanf("%d", &n);
	
	for(int i = 1; i<=n; i += incremento){
		if(iterador % 2 == 0){
			incremento = 4;
		} else{
			incremento = -2;
		}
		printf("%d\n", i);
		iterador++;
	}
		
return 0;	
}






/*
- Note lo bonito de este código. Dentro del for, nosotros decimos que el incremento de i será: **i += incremento.** Lo chistoso es que… nunca dijimos de cuánto era el incremento. Pero piense que en el for se siguen los siguiente pasos:
1. Revisar que se cumpla una condición
2. Se ejecuta alguna vaina
3. Se actualiza el contador

Dentro del **if** es donde yo voy decidir de cuánto será el incremento. Y como ese if hace parte del **paso 2,** que pues va antes del 3 xd, no está mal que ponga incremento de la forma en que lo hice.

En otras palabras, de arriba para abajo primero usé la variable incremento y luego dije quién era… algo que pareciera no tener sentido. Pero lo importante es que **Lógicamente** primero sí defino incremento y después sí lo utilizo. 

- Como la **sucesión alterna** sumando 4 en una y restando -2 en otra, para alterar el valor de incremento es que uso la variable **iterador.** Y pues la forma en que itera es super sencilla xd
*/
