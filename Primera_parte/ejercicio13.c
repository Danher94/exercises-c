#include <stdio.h>

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
