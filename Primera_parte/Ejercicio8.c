#include <stdio.h>

int main(){
	int hour, min, sec;
	
	printf("Ingrese la hora: ");
	scanf("%d", &hour);
	
	printf("Ingrese los minutos: ");
	scanf("%d", &min);
	
	printf("Ingrese los segundos: ");
	scanf("%d", &sec);
	
	hour *= 3600;
	
	min *= 60;
	
	sec += min + hour;
	
	printf("Los datos corresponden a: %d segundos", sec);
	
	return 0;
}
