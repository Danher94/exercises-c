#include <stdio.h>

int main() {
	float precio_articulo, precio_ganancia, porcentaje;
	
	//printf("Ingrese el porcentaje de descuento:");
	//scanf("%f", &porcentaje);
	porcentaje = (100 - 30) / 100;
	
	printf("Ingrese el monto del articulo comprado:");
	scanf("%f", &precio_articulo);
	
	precio_ganancia = precio_articulo / porcentaje;
	printf("Para obtener el 30%% de ganancia se debe vender el articulo en: %f", precio_ganancia);
	
	return 0;
}
