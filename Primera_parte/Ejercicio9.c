#include <stdio.h>

/* ---Enunciado---
Cinco miembros de un club contra la obesidad desean saber cuanto han bajado o
subido de peso desde la ultima vez que se reunieron. Para esto se debe realizar un
ritual de pesaje en donde cada uno se pesa en diez básculas distintas para así tener
el promedio mas exacto de su peso. Si existe diferencia positiva entre este promedio
de peso y el peso de la ultima vez que se reunieron, significa que subieron de peso.
Pero si la diferencia es negativa, significa que bajaron. Lo que el problema requiere
es que por cada persona se imprima un letrero que diga: “SUBIO” o “BAJO” y la
cantidad de kilos que subió o bajo de peso.
*/

int main(){
	float balance_1, balance_2, balance_3, balance_4, balance_5, balance_6, balance_7, balance_8, balance_9, balance_10, average, previus_w, result;
	//float balance[]
	printf("Ingrese el peso de la ultima reunion: ");
	scanf("%f", &previus_w);

	printf("Ingrese el peso de la 1ra balanza: ");
	scanf("%f", &balance_1);
	printf("Ingrese el peso de la 2da balanza: ");
	scanf("%f", &balance_2);
	printf("Ingrese el peso de la 3ra balanza: ");
	scanf("%f", &balance_3);
	printf("Ingrese el peso de la 4ta balanza: ");
	scanf("%f", &balance_4);
	printf("Ingrese el peso de la 5ta balanza: ");
	scanf("%f", &balance_5);
	printf("Ingrese el peso de la 6ta balanza: ");
	scanf("%f", &balance_6);
	printf("Ingrese el peso de la 7ma balanza: ");
	scanf("%f", &balance_7);
	printf("Ingrese el peso de la 8va balanza: ");
	scanf("%f", &balance_8);
	printf("Ingrese el peso de la 9na balanza: ");
	scanf("%f", &balance_9);
	printf("Ingrese el peso de la 10ma balanza: ");
	scanf("%f", &balance_10);
	
	average = (balance_1 + balance_2 + balance_3 + balance_4 + balance_5 + balance_6 + balance_7 + balance_8 + balance_9 + balance_10) / 10;
	
	if(average < previus_w){
		result = previus_w - average;
		printf("El promedio del pesaje fue de %.2f. Bajaste %.2f kilos", average, result);
	}else{
		result = average - previus_w;
		printf("El promedio del pesaje fue de %.2f. Subiste %.2f kilos", average, result);
	}
	
	return 0;
}
