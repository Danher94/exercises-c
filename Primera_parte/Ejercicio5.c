#include <stdio.h>

int main(){
	float investor_1, investor_2, investor_3, investment, percent_1, percent_2, percent_3;
	
	printf("Ingrese el monto del primer inversor:");
	scanf("%f", &investor_1);
	
	printf("Ingrese el monto del segundo inversor:");
	scanf("%f", &investor_2);

	printf("Ingrese el monto del tercer inversor:");
	scanf("%f", &investor_3);
	
	investment = investor_1 + investor_2 + investor_3;
	
	percent_1 = investor_1 / investment * 100;
	percent_2 = investor_2 / investment * 100;
	percent_3 = investor_3 / investment * 100;
	
	printf("El porcentaje de inversion quedo asi:\nPrimer inversor : %.2f\nSegundo inversor: %.2f\nTercer inversor: %.2f\n", percent_1, percent_2, percent_3);
	
	return 0;
}
