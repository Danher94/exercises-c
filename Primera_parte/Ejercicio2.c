#include <stdio.h>

int main (){
	int nota_parcial, nota_parcial_2, nota_parcial_3;
	int examen_final;
	int trabajo_final;
	float promedio_parciales;
	float calificacion_final;
	
	printf("Ingresa la nota del 1er parcial:");
	scanf("%d", &nota_parcial);
	
	printf("Ingrese el valor del 2do parcial:");
	scanf("%d", &nota_parcial_2);
	
	printf("Ingrese la not del 3er parcial:");
	scanf("%d", &nota_parcial_3);
	
	printf("Ingrese nota del examen final:");
	scanf("%d", &examen_final);
	
	printf("Ingrese nota del trabajo final:");
	scanf("%d", &trabajo_final);
	
	promedio_parciales = (nota_parcial + nota_parcial_2 + nota_parcial_3) / 3.00;
	//printf("El promedio de los parciales due de: %f", promedio_parciales);
	
	calificacion_final = promedio_parciales * 0.55 + examen_final * 0.3 + trabajo_final * 0.15;
	printf("La calificacion final de la materia es: %.2f", calificacion_final);
	
	return 0;
}
