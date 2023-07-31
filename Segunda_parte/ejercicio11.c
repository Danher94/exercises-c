#include <stdio.h>
#include <string.h>

/*
Escribir un programa que borre todos los espacios extras de un string.
Ej: "Hola     mundo   cruel" -> "Hola mundo cruel".
*/

int main () {
	char str1[100], str2[100];
	int i =0, j = 0;
	
	printf("Ingrese el texto: ");
	fgets(str1, sizeof(str1), stdin);
	
	while (str1[i] != '\0'){
		while (str1[i] == 32 && str1[i+1] == 32){
			i++;
		}
		str2[j] = str1[i];
		i++;
		j++;
	}
	printf("Resultado: %s", str2);
	return 0;
}
