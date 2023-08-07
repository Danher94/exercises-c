#include <stdio.h>
#include <string.h>

/* ---Enunciado---
Escribir un programa que indique si dos strings son iguales
*/

int main(){
	char str1[100], str2[100];
	int i, AreEqual = 1;

	printf("Ingrese el primer texto: ");
	fgets(str1, sizeof(str1), stdin);

	printf("Ingrese el segundo texto: ");
	fgets(str2, sizeof(str2), stdin);
	
	if (strlen(str1) == strlen(str2)){
		for	(i = 0; i <= strlen(str1) - 1; i++){
			if(str1[i] != str2[i]){
				AreEqual = 0;
				break;
			}
		}
	}else{
		AreEqual = 0;
	}

	if (AreEqual){
		printf("Los textos son iguales");
	}else{
		printf("Los textos no son iguales");
	}
	
	return 0;
}
