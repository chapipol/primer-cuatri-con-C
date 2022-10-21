#include <stdio.h>
#include <stdlib.h>

/* La idea es que si se ingresa un numero que sea menor
a 2 o mayor a 9 el programa entonces solicitara nuevamente
un dato hasta que se ingrese uno que sea valido
*/

int main(int argc, char *argv[]) {

    // declaramos variables
	int n;
	int m;

    // Bucle con condicion
    do {

        // Solicitar numero  elegido
        printf("Ingrese el numero a multiplicar: ");

        // Registrar datos brindados
        scanf("%i", &n);

    }
    /* Pero siempre y cuando los datos sean menores o
    iguales 9 o mayores o iguales a 2
    */
    while (n <= 2 || n >= 9);

    /* Bucle de variable "m" que incrementa de 1 hasta
    10 inclusive
	*/
    for (m = 1; m <= 10; m++)

        /* Muestra en pantalla el numero elegido (n)
        multiplicandose por (m) = al resultado + un enter
        */
		printf("%i x %i = %i \n", n, m, n * m);


	return 0;
}