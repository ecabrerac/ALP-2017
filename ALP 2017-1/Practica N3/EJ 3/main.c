#include <stdio.h>
#include <stdlib.h>
#include <time.h>


//Ejercicio 3

int main()
{
	int num, guess, intentos=1;

	srand(time(NULL));
	num = rand()%100 +1;

	printf("Intenta adivinar mi numero!\n");
	printf("Ingrese un numero entre 1 y 100\n");

	while(1)//empezamos un loop while "infinito" para ir pidiendole intentos al usuario.
	{
		scanf("%d", &guess); //Le pedimos un número al usuario y almacenamos ese valor en "guess"

		if(guess==num){//Verificamos con un if si el número ingresado es el numero a adivinar.
			printf("Muy bien!\nNumero de intentos: %d\n", intentos);
			break; ////salimos del while en caso que "num" haya sido adivinado.
		}


		else if(guess<num)
			printf("Nop, mi numero es mayor, vuelve a intentarlo\n");
		else if(guess>num)
			printf("Nop, mi numero es menor, vuelve a intentarlo\n");
		intentos++;
		//En caso de no acertar, vemos si el número ingresado es menor o mayor que "num" y le sumamos 1 a "intentos".
	}
    return 0;
}
