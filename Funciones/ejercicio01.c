#include <stdio.h>
#include <string.h>

/*
Crea un procedimiento EscribirCentrado, que reciba como parámetro un 
texto y lo escriba centrado en pantalla (suponiendo una anchura de 80 
columnas; pista: deberás escribir 40 - longitud/2 espacios antes del 
texto). Además subraya el mensaje utilizando el carácter =.
*/

void EscribirCentrado(char *str, char* text, char* underline){
	int i, j, num_space;
	num_space = 40 - strlen(str)/2;
	
	for (i = 0; i <= num_space; i++){
		text[i] = 32;
		underline[i] = 32;
	}
	for (j = 0; j <= strlen(str); j++, i++){
		text[i] = str[j];
		underline[i-1] = 61;
	}
	
	text[i] = '\0';
	underline[i-1] = '\0';

}

int main (){
	
	char str1[100], text[200], underline[200];
	
	printf("Ingrese texto: ");
	fgets(str1, sizeof(str1), stdin);
	
	EscribirCentrado(str1, text, underline);
	
	printf("%s\n%s%s", underline, text, underline);
	
	return 0;
}
