#include <stdio.h>

/* ---Enunciado---
El dueño de una tienda compra un articulo a un precio determinado. Obtener el
precio en que lo debe vender para obtener una ganancia del 30%.
*/

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
