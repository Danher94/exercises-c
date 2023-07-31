#include <stdio.h>
#include <string.h>

/*
Escribir un programa que valide si una dirección de correo electrónico 
es válida. Para considerarla válida, debe tener al menos tres 
caracteres, seguidos de un “@”, seguido de al menos dos letras o 
números (sin caracteres especiales), luego un punto y dos caracteres al 
final. Ejemplo válido: ejemplo@gmail.com , Ejemplo válido: aa@!!.co 
*/

int main () {
	char str1[100];
	int i = 0, Validate3Letters = 1, Validate2Letters = 1, NumLetters = 0;
	
	printf("Ingrese el correo a validar:\n");
	fgets(str1, sizeof(str1), stdin);
	
	if (strlen(str1) >= 10){
		while (str1[i] != '\0'){
			for (; i <3; i++){
				if (!((str1[i] >= 65 && str1[i] <= 90) || (str1[i] >= 97 && str1[i] <= 122))){
					Validate3Letters = 0;
					break;
				}
				NumLetters ++;
			}
			if (Validate3Letters == 0 || NumLetters <= 2){
				printf("Debe poseer al menos 3 caracteres validos antes del '@'");
				break;
			}else{
				NumLetters = 0;
			}
			while (str1[i] != 64 && str1[i] != '\n'){
				i++;
			}
			if (str1[i] != 64){
				printf("Debe poseer '@'");
				break;
			}else{
				i++;
			}
			while (str1[i] != 46 && str1[i] != '\n'){
				if((str1[i] >= 65 && str1[i] <= 90) || (str1[i] >= 97 && str1[i] <= 122)){

				}else{
					Validate2Letters = 0;
					break;
				}
				NumLetters ++;
				i++;
			}
			if (Validate2Letters == 0 || NumLetters <2){
				printf("Debe poseer al menos 2 letras o numeros sin caracteres especiales luego del '@'");
				break;
			}
			if(str1[i] == 46){
				i++;
			}else{
				printf("Debe poseer '.'");
				break;
			}
			if(str1[i+1] != '\n' && str1[i+2] != '\0'){
				printf("Correo validado");
				break;
			}else{
				printf("Debe poseer al menos dos caracteres luego del '.'");
				break;
			}
		}
	}else{
		printf("No cumple el minimo de caracteres");
	}
	
	return 0;
}
