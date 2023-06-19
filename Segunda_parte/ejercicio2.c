#include <stdio.h>
#include <string.h>

/* ---Enunciado---
Escribir un programa que concatene dos strings. Ejemplo: 
el usuario ingresa "hola" y "mundo" -> "holamundo"
*/

int main(){
	char str1[100], str2[100], result[200];
	int i, j;
	
	printf("Ingrese el primer texto:\n");
	fgets(str1, sizeof(str1), stdin);

	printf("Ingrese el segundo texto:\n");
	fgets(str2, sizeof(str2), stdin);

	for (i = 0; i <= strlen(str1) - 2; i++){
		result[i] = str1[i];
	}

	for (j = 0; j <= strlen(str2); j++, i++){
		result[i] = str2[j];
	}
	
	printf("Resultado: %s", result);

	return 0;
}
