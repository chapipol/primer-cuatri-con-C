#include<stdio.h>



int main (){

	float neto, valor_total, horas, valHora, imp, tasa;
	int i=0;
	
	do
	{	
		printf("\ningrese cantidad de horas trabajadas: ");
		scanf("%f", &horas);
		printf("\ningrese valor por hora de trabajo: ");
		scanf("%f", &valHora);
		printf("\ningrese porcentaje de impuestos a descontar: ");
		scanf("%f", &imp);
		
		neto = horas * valHora;
		tasa = (imp / 100) * neto;
		valor_total = neto - tasa;
		
		printf("\nValor total trabajado: %.2f\n", neto);
		printf("Descuento por impuestos: %.2f, total: %.2f\n", imp, tasa);
		printf("\nA pagar al empleado: %.2f\n", valor_total);
		
		printf("\nSi desea continuar con el programa ingrese 1, cualquier otro numero para finalizar.\n");
		scanf("%i", &i);
	
	}while(i==1);


}
