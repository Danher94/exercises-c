#include <stdio.h>

/* ---Enunciado---
Escribir un programa que indique si dos strings son iguales
*/

int main(){
	char str1[3], str2[3];
	
	printf("Ingrese el primer valor: ");
	fgets(str1, sizeof(str1), stdin);

	printf("Ingrese el segundo valor: ");
	fgets(str2, sizeof(str2), stdin);
	
	if(str1[0] == str2[0]){
		printf("Los valores son iguales");
	}else{
		printf("Los valores no son iguales");
	}
	
	return 0;
}
