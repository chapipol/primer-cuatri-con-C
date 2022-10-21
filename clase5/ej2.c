#include <stdio.h>
/* Escribir el algoritmo necesario para calcular y mostrar el cuadrado de un numero. El
numero debe ser mayor que cero, en caso de error que aparezca el mensaje �ERROR,
el numero debe ser mayor que cero.  */
int main () {

	int n1=0, potencia;

	printf("Ingrese un nro: ");
	scanf("%i", &n1);

	while(n1<=0) {
		printf("ERROR,el numero debe ser mayor que cero.");
		scanf("%i", &n1); //renovamos el nro
	}

	//hago el calculo despues para asegurarme de que
	//este bien ingresado primero
	potencia = n1*n1;
	printf("La potencia de %i es: %i\n", n1, potencia);

}