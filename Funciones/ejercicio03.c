#include <stdio.h>
#include <string.h>

/*
Escribir dos funciones que permitan calcular:
● La cantidad de segundos en un tiempo dado en horas, minutos
y segundos.
● La cantidad de horas, minutos y segundos de un tiempo dado
en segundos.
Escribe un programa principal con un menú donde se pueda
elegir la opción de convertir a segundos, convertir a horas,minutos y
segundos o salir del programa. 
*/

void ConvertirHorasMinSeg (int val1, int val2, int val3){
	val1 *= 3600;
	val2 *= 60;
	val3 += val1 + val2;
	printf("El total de segundos es: %d", val3);
}

void ConvertirSegundos (int secs){
	int mins, hours, sec, remaining;
	hours = secs / 3600;
	remaining = secs % 3600;
	
	mins = remaining / 60;
	sec = remaining % 60;
	
	printf("Horas: %d, minutos: %d, segundos: %d", hours, mins, sec);
}

int main (){
	char menu[] = "=======================================\n" 
					"               MENU\n"
					"=======================================\n" 
					"1.Convertir a segundos\n" 
					"2.Convertir a horas minutos y segundos\n" 
					"3.Salir\n" 
					"=======================================\n\n";
	int option, sec, hours, mins;
	
	printf("%s", menu);
	printf("Seleccione el numero: ");
	scanf("%d", &option);
	
	while (option == 0 || option >3){
		printf ("Operador %d no soportado.\nIntentelo nuevamente: ", option);
		scanf("%d", &option);
	}
	
	switch (option){
		case 1:
			printf("Ingrese la hora: ");
			scanf("%d", &hours);
			printf("Ingrese los minutos (menor a 60): ");
			scanf("%d", &mins);
			printf("Ingrese los segundos (menor a 60): ");
			scanf("%d", &sec);
			if (mins >= 60 || sec >= 60){
				printf("Numeros no admitidos");
			}else{
				ConvertirHorasMinSeg(hours, mins, sec);
			}
			break;
			
		case 2:
			printf("Ingrese el numero de segundos: ");
			scanf("%d", &sec);
			ConvertirSegundos(sec);
			break;
			
		case 3:
			printf("Has salido con exito.");
			break;
	}
	
	return 0;
}
