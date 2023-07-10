#include <stdio.h>
#include <string.h>

/*
Escribir un programa que indique si una contraseña es fuerte:
tiene al menos 6 caracteres
tiene al menos una mayúscula
tiene al menos una minúscula
tiene un carácter especial !@#$%^&*()-+
tiene un número
*/

int main (){
	char str1[100];
	int i = 0, MinChar = 0, CapLetter = 0, LowLetter = 0, SpecialChar = 0, NumChar = 0, result = 0;
	
	printf("Ingrese la clave:\n");
	fgets(str1, sizeof(str1), stdin);
	
	if (strlen(str1) >= 7){
		MinChar ++;
	}
	for (i = 0; i <= strlen(str1)-1 ; i++){
		if (CapLetter == 0 || LowLetter == 0 || SpecialChar == 0 || NumChar == 0){
			if ((str1[i] >= 65 && str1[i] <= 90) && CapLetter == 0){
				CapLetter ++;
			}
			if ((str1[i] >= 97 && str1[i] <= 122) && LowLetter == 0){
				LowLetter ++;
			}
			if ((str1[i] == 33 || (str1[i] >= 35 && str1[i] <= 38) || (str1[i] >= 40 && str1[i] <= 43) || str1[i] == 45 || str1[i] == 64 ||str1[i] == 94) && SpecialChar == 0){
				SpecialChar ++;
			}
			if ((str1[i] >= 48 && str1[i] <= 57) && NumChar == 0){
				NumChar ++;
			}
		}else{
			break;
		}
	}
	result = MinChar + CapLetter + LowLetter + SpecialChar + NumChar;
	if (result <= 2){
		printf("La clave es Devil");
	}else if (result >= 3 && result <= 4){
		printf("La clave es Normal");
	}else{
		printf("La clave es Fuerte");
	}
	
	return 0;
}
