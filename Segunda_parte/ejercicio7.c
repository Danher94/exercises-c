#include <stdio.h>
#include <string.h>

/*
Escribir un programa que encuentre la primera ocurrencia de un caracter 
en un string. Ej:  "hola mundo", 'o' -> 1 (imprime el indice de el 
caracter, -1 si no lo encuentra) 
*/


int main () {
	char str1[100], str2[10];
	int i, j = -1;
	
	printf("Ingrese el texto: ");
	fgets(str1, sizeof(str1), stdin);
	
	printf("Ingrese el caracter a buscar: ");
	fgets(str2, sizeof(str2), stdin);
	
	for (i = 0; i <= strlen(str1) - 1; i++){
		if (str1[i] == str2[0]){
			j = i;
			break;
		}
	}
	
	if( j >= 0){
		printf("El indice es: %d", j);
	}else{
		printf("No hay resultados: %d\n", j);
	}
	
	return 0;
}
