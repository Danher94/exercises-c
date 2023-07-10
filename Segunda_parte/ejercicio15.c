#include <stdio.h>
#include <string.h>

/*
Julius Caesar protegia su información confidencial encriptandola usando 
un “cipher” (cifrador?). El cipher de Caesar, rota cada letra del abecedario 
por un número dado, de esta forma, si el numero dado es 3, la letra ‘a’ 
pasaria a ser ‘d’. Si se evaluara la letra ‘z’ esta pasaria a ser ‘c’ 
(z -> a -> b -> c).  Escriba un programa que dado un string y un numero, 
imprima el texto cifrado (notese que solo debe cifrar las letras, los 
caracteres especiales y numeros quedan igual)
*/

int main (){
	char str1[100], str2[100];
	int i = 0, j = 0, num;
	
	printf("Ingrese el texto a encriptar:\n");
	fgets(str1, sizeof(str1), stdin);
	
	printf("Ingrese el numero:\n");
	scanf("%d", &num);
	
	for (; i <= strlen(str1); i++){
		if (str1[i] >= 97 && str1[i] <= 122){
			j = str1[i] + num;
			if(j > 122){
				j = (j-122) + 96;
				str2[i] = j;
				printf("j = %d\n", j);
			}else{
				str2[i] = j;
			}
		}else{
			str2[i] = str1[i];
		}
	}
	printf("Encriptado: %s",str2);
	
	return 0;
}
