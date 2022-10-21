#include <stdio.h>
/*  ingresar un numero correspondiente a los dias de una semana y muestre el nombre del dia. Que se permita trabajar
hasta que el usuario indique lo contrario.  */

int main () {

	int n1=1;

	while(n1!=0) {

		fflush(stdin);
		printf("Ingrese un numero o '0' para salir: \n");
		scanf("%i", &n1);

		switch(n1) {
			case 0:
				printf("ADIOSHH!\n");
				n1=0;
				break;
            case 1:
				printf("Lunes\n");
				n1=1;
				break;
			case 2:
				printf("Martes\n");
				n1=1;
				break;
			case 3:
				printf("Miercoles\n");
				n1=1;
				break;
			case 4:
				printf("Jueves\n");
				n1=1;
				break;
			case 5:
				printf("Viernes\n");
				n1=1;
				break;
			case 6:
				printf("Sabado\n");
				n1=1;
				break;
			case 7:
				printf("Domingo\n");
				n1=1;
				break;
			default :
				printf("Este valor no es valido para un dia de la semana\n");
				n1=1;
				break;
		}


	}
}