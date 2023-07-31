#include <stdio.h>
#include <string.h>

/*
Escribir un programa que borre la primera ocurrencia de un caracter 
en un string. Ej: "hola", 'o' -> "hla".
*/


int main () {
	char str1[100], str2[5];
	int i;
	
	printf("Ingrese el texto: ");
	fgets(str1, sizeof(str1), stdin);
	
	printf("Ingrese la ocurrencia: ");
	fgets(str2, sizeof(str2), stdin);
	
	for (i = 0; i <= strlen(str1) - 1; i++){
		if(str1[i] == str2[0]){
			for (i = i; i <= strlen(str1) - 1; i++){
				str1[i] = str1[i + 1];
			}
		}
	}
	
	printf("Resultado: %s", str1);
	
	return 0;
}