#include <stdio.h>
#include <string.h>

/*
 Escriba un programa que identifique si un string es substring de otro. 
 Ejemplo: “hola” y “holamundo” -> si es substring. Ejemplo 2: “holaa” y 
 “holamundo” -> no es substring
*/

int main (){
	char str1[100], str2[100];
	int i = 0, j = 0;
	
	printf("Ingrese el string:\n");
	fgets(str1, sizeof(str1), stdin);
	
	printf("Ingrese el substring:\n");
	fgets(str2, sizeof(str2), stdin);
	
	if (strlen(str2) < strlen(str1)){
		for (; i <= strlen(str1); i++){
			if (str1[i] == str2[j]){
				while ((str1[i] == str2[j]) && str2[j] != '\n'){
					i++;
					j++;
				}
				if(str2[j] == '\n'){
					printf("\nSi es substring");
					break;
				}else{
					printf("\nNo es substring");
					break;
				}
			}
			if(str1[i] == '\n'){
				printf("\nLos strings no poseen coincidencias");
				break;
			}
		}
	}else{
		printf("El substring no puede ser mayor o igual al string");
	}
	
	return 0;
}
