#include <stdio.h>
#include <string.h>

/* ---Enunciado---
Escribir un programa que concatene dos strings. Ejemplo: 
el usuario ingresa "hola" y "mundo" -> "holamundo"
*/

int main(){
	char str1[200], str2[100];
	
	printf("Ingrese el primer texto:\n");
	fgets(str1, sizeof(str1), stdin);
	str1[strcspn(str1, "\n")] = ' '; // Añadi esta linea que me permite reemplazar el \n para ver mejor la union de las palabras

	printf("Ingrese el segundo texto:\n");
	fgets(str2, sizeof(str2), stdin);
	
	strcat(str1, str2);
	printf("Este es el texto concatenado: %s", str1);
	
	return 0;
}
