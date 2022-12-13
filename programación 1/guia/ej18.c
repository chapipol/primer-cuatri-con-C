#include<stdio.h>

/*Ingresar un número, entero y efectuar la suma de todos los números que le
anteceden, comenzando desde 0 y mostrar el resultado por pantalla*/

int main () 
{
	int i, n, total=0;
	
	printf("Ingrese un numero entero: ");
	scanf("%i", &n);
	
	for(i=0;i<=n;i++)
	{		
		total = i + total;
	}
	
	printf("la suma de todos los numeros que hay de 0 a %i es: %i", n, total);
	
	
}
