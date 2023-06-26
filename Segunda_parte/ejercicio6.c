#include <stdio.h>
#include <string.h>

/*
Escribir un programa que indique si un string es palindromo.
(Palabra o frase cuyas letras están dispuestas de tal manera 
que resulta la misma leída de izquierda a derecha que de derecha
a izquierda ; p. ej., anilina).
*/

int main () {
	char str1[100];
	int i, j, h = 0;
	
	printf("Ingrese la palabra: ");
	fgets(str1, sizeof(str1), stdin);
	
	for (i = 0, j = strlen(str1) - 2; i <= strlen(str1) - 2; i++, j--){
		if (str1[i] != str1[j]){
			h++;
		}
	}
	
	if (h == 0){
		printf("Esta palabra es palindroma");
	}else{
		printf("Esta palabra no es palindroma");
	}
	
	return 0;
}
