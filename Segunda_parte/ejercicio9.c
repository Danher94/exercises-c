#include <stdio.h>
#include <string.h>

/*
Escribir un programa que borre todos los espacios extras de un string.
Ej: "Hola     mundo   cruel" -> "Hola mundo cruel".
*/

int main(){

	char str1[100], str2[10];
	int i, j = 0;
	
	printf("Ingrese el texto: ");
	fgets(str1, sizeof(str1), stdin);
	
	printf("Ingrese el caracter a buscar: ");
	fgets(str2, sizeof(str2), stdin);
	
	for (i = 0; i <= strlen(str1) - 1; i++){
		if (str1[i] == str2[0]){
			j ++;
		}
	}
	
	if( j > 0){
		printf("Existen %d ocurrencias", j);
	}else{
		printf("No hay ocurrencias");
	}
	
	return 0;
}
