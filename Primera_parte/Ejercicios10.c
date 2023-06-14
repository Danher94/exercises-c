#include <stdio.h>

/*Escriba un programa que multiplique dos números por medio de sumas sucesivas.
(No usar operador de multiplicacion, solo el de suma, y estructura repetitiva)*/

int main(){
	int number_1, number_2, i, result;
	result = 0;
	
	printf("Ingrese el primer numero:");
	scanf("%d", &number_1);
	
	printf("Ingrese el segundo numero:");
	scanf("%d", &number_2);
	
	for(i = 1; i <= number_2 ; i++) {
		result += number_1;
	}
	printf("%d * %d = %d", number_1, number_2, result);
	return 0;
}
