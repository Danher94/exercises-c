#include <stdio.h>
#include <string.h>

/*
Escribir un programa que permita identificar cuántas palabras tiene 
un string en CamelCase, por ejemplo: HolaMundoCruel -> 3 palabras.
*/

int main (){
	char str1[100];
	int i, word = 0;
	
	printf("Ingrese el string:\n");
	fgets(str1, sizeof(str1), stdin);
	
	while (str1[i] != '\0'){
		while (str1[i] >= 65 && str1[i] <= 90){
			word++;
			i++;
		}
		
		i++;
	}
	
	printf("El string tiene %d palabras.", word);
	
	return 0;
}
