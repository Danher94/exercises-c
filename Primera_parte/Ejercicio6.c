#include <stdio.h>

/* ---Enunciado---
Una persona enferma, que pesa 70 kg, se encuentra en reposo y desea saber
cuantas calorías consume su cuerpo durante todo el tiempo que realice una misma
actividad. Las actividades que tiene permitido realizar son únicamente dormir o estar
sentado en reposo. Los datos que tiene son que estando dormido consume 1.08
calorías por minuto y estando sentado en reposo consume 1.66 calorías por minuto.
Nota: para saber que actividad realizo el usuario, se le puede solicitar ingresar un
UNO (1) para dormir o un DOS (2) para sentado.
*/

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
