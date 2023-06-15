#include <stdio.h>

/* ---Enunciado--- (Decidí hacerlo de otra manera para mejorarlo)
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
	float previus_w, average, result, list_balance[10];
	int i = 0;
	
	printf("Ingrese el pesaje de la ultima reunion: ");
	scanf("%f", &previus_w);
	
	for(i = 0; i < 10; i++){
		printf("Ingrese el peso de la balanza %d: ", i + 1);
		scanf("%f", &list_balance[i]);
		average += list_balance[i];
	}	
	average /= 10;
	if(average < previus_w){
		result = previus_w - average;
		printf("el promedio es de %.2f kilos. Bajaste %.2f kilos", average, result);
	}else{
		result = average - previus_w;
		printf("el promedio es de %.2f kilos. Subiste %.2f kilos", average, result);
	}

	return 0;
}
