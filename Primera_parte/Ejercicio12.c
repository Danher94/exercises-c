#include <stdio.h>

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
