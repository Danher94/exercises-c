#include <stdio.h>
#include <string.h>

/*
Escribir un programa que cuente el numero de palabras en un string
*/

int main (){
	char str1[100];
	int num = 0, i;
	
	printf("Ingrese las palabras: ");
	fgets(str1, sizeof(str1), stdin);
	
	for (i = 0; i <= strlen(str1) - 1; i++){
		if(str1[i] == 32){
			while (str1[i] == 32){
				i++;
			}
		}
		if (str1[i] != 32 && str1[i] != '\n'){
			while (str1[i] != 32){
					i++;
			}
			num++;
		}
	}
	printf("Escribio %d palabra(s)", num);
		
	return 0;
}
