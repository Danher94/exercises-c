#include <stdio.h>

/* ---Enunciado---
Escribir un programa que calcule el factorial de un número n! a partir de un entero
positivo n:
- si n = 0, n! = 1
- si n > 0, n! = n ∗ ( n - 1) ∗ (n - 2) ∗ . . . . ∗ 1
*/

int main() {
	int i, number, result;
	result = 1;
	printf("Ingrese el numero:\n");
	scanf("%d", &number);
	
	for(i = number; i > 1; i--){
		result *= i;
	}
	printf("resultado: %d", result);
	return 0;
}
