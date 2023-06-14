#include <stdio.h>

int main(){
	int activity;
	float sleep = 1.08, sitting = 1.66, min, result;
	
	printf("¿Que actividad realizo? Escriba 1 para dormir o 2 para sentado: ");
	scanf("%d", &activity);

	printf("¿Por cuantos minutos realizo la actividad?: ");
	scanf("%f", &min);
	
	if (activity == 1) {
		result = min * sleep;
		printf("Ha quemado %.2f calorias durmiendo", result);
	}else if(activity ==2){
		result = min * sitting;
		printf("Ha quemado %.2f calorias sentado", result);
	}else {
		printf("Indicador no soportado");
	}
	
	return 0;
}
