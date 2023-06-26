#include <stdio.h>
#include <string.h>

/*
Escribir un programa que imprima un string al reves 
*/

int main() {
	char str1[100], str2[100];
	int i, j = 0;
	
	printf("Ingrese el texto a invertir: ");
	fgets(str1, sizeof(str1), stdin);
	
	for (i = strlen(str1) - 2; i >= 0; i--, j++){
		str2[j] = str1[i];
	}
	
	str2[j] = '\0';
	
	printf("Valor invertido: %s ", str2);
	
	return 0;
}
