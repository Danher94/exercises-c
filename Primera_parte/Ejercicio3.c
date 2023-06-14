#include <stdio.h>

int main(){
	float cantidad_pesos, unidad_cambiaria, equivalente;
	
	printf("Ingrese el monto en pesos:");
	scanf("%f", &cantidad_pesos);
	
	printf("Ingrese la tasa de cambio:");
	scanf("%f", &unidad_cambiaria);
	
	equivalente = cantidad_pesos / unidad_cambiaria;
	printf("El equivalene en dolares es: %f", equivalente);
	
	return 0;
}
