#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
	int min_number = 1;
	int max_number = 100;
	srand(time(NULL));
	int random_number = rand() % (max_number + 1 - min_number) + min_number;
	int valor_compra;
	float total_compra;
	int discount;
	
	printf("Ingrese el valor de la compra:");
	scanf("%d", &valor_compra);
	printf("El numero aleatorio es: %d \n\n", random_number);
	
	if(random_number < 74) {
		discount = 15;
		total_compra = valor_compra - (valor_compra * 0.15);
	} else {
		discount = 20;
		total_compra = valor_compra - (valor_compra * 0.20);
	}
	printf("Usted obtuvo un descuento del %d. El valor total de la compra es: %f", discount, total_compra);		
	return 0;
}

