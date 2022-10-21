#include <stdio.h>

int main() {
	//bucles
	//calculadora con un menu para que el usuario elija la operacion
	int i=0, n1, n2;

	while( i!=3 ) {

		printf("\nIngrese 2 numeros: ");
		scanf("%i %i", &n1, &n2);
		printf("\n1. Sumar numeros\n");
		printf("2. Restar numeros\n");
		printf("3. Finalizar\n");
		scanf("%i", &i);

		if( i == 1 ) {
			printf("\n%i + %i = %i", n1, n2, n1+n2);
		} else if ( i == 2 ) {
			printf("\n%i - %i = %i", n1, n2, n1-n2);
		} else if (i!=3) {
			 printf("\nEl numero ingresado no es valido. Intentelo de nuevo.");
		} else {
			printf("Se ha finalizado el programa.");
		}
	}

}