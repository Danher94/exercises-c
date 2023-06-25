#include <stdio.h>

/* ---Enunciado---
Escriba un programa que dada una hora en formato (horas, minutos, segundos)
indiqué cual será el tiempo dentro de un segundo.
*/

int main(){
	int hour, min, sec;
	
	printf("Ingrese la hora: ");
	scanf("%d", &hour);
	
	printf("Ingrese los minutos (menor a 60): ");
	scanf("%d", &min);
	
	printf("Ingrese los segundos (menor a 60): ");
	scanf("%d", &sec);
	
	if (hour >= 24 || min >= 60 || sec >= 60){
		printf("Numeros no admitidos");
	}else {
		if (sec == 59){
			sec = 0;
			min += 1;
			if (min == 60){
				min = 0;
				hour += 1;	
				if (hour == 24){
					hour = 0;
					min = 0;
					sec = 0;
				}
			}

		}else{
			sec += 1;
		}
		
		printf("La hora dada luego de un segundo es de %.2d:%.2d:%.2d", hour, min, sec);
	}
	
	return 0;
}
