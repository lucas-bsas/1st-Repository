/*
 ============================================================================
 Name        : 2-1.c
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
	int numero4;
	int numero5;

	int suma;
	int promedio;

	printf("Ingrese el primer numero");
	scanf("%d", &numero1);

	printf("Ingrese el segundo numero");
	scanf("%d", &numero2);

	printf("Ingrese el tercer numero");
	scanf("%d", &numero3);

	printf("Ingrese el cuarto numero");
	scanf("%d", &numero4);

	printf("Ingrese el quinto numero");
	scanf("%d", &numero5);

	suma = (numero1 + numero2 + numero3 + numero4 + numero5);
	promedio = (suma/5);

	printf("El promedio de los numeros ingresados es: %d", promedio);

	return EXIT_SUCCESS;
}
