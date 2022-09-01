/*
 ============================================================================
 Name        : Holamundo.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	setbuf(stdout,NULL);

	int numero1;
	int numero2;
	int numero3;
	int numeroMedio;

	printf("Ingrese el primer numero");
	scanf("%d", &numero1);

	printf("Ingrese el segundo numero");
	scanf("%d", &numero2);

	printf("Ingrese el tercer numero");
	scanf("%d", &numero3);


	if(numero1 > numero2 && numero1 < numero3 || numero1 < numero2 && numero1 > numero3)
	{
		numeroMedio = numero1;
		printf("El numero del medio es: %d", numeroMedio);
	}
	else if(numero2 > numero1 && numero2 < numero3 || numero2 < numero1 && numero2 > numero3)
	{
		numeroMedio = numero2;
		printf("El numero del medio es: %d", numeroMedio);
	}
	else if(numero3 > numero1 && numero3 < numero2 || numero3 < numero1 && numero3 > numero2)
	{
		numeroMedio = numero3;
		printf("El numero del medio es: %d", numeroMedio);
	}
	else
	{
		printf("No hay numero medio.");
	}

	return EXIT_SUCCESS;
}
