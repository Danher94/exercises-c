#include <stdio.h>

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
