#include <stdio.h>

/* ---Enunciado---
Realizar un programa para obtener la suma de los cien números siguientes a uno
dado.
*/

int main() {
	int num, add = 0, i;
	
	printf("Ingrese el numero: ");
	scanf("%d", &num);
	
	for (i = num + 1; i <= num + 100; i++){
		add += i;
	}
	
	printf("La suma de los cien numeros siguientes a %d es: %d", num, add);
	
	return 0;
} 
