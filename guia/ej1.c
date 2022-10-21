#include <stdio.h>
/* Ingresar 5 n�meros y calcular su promedio. */
int main () {

	int a,b,c,d,e, promedio, suma;

	printf("Ingresar 5 numeros: ");
	scanf("%i %i %i %i %i", &a, &b, &c, &d, &e);

	suma = a+b+c+d+e;
	promedio = suma / 5;

	printf("El promedio es: %i\n", promedio);

}