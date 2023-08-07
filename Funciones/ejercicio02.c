#include <stdio.h>

/*
Crea un programa que pida dos número enteros al usuario y diga si alguno 
de ellos es múltiplo del otro. Crea una función EsMultiplo que reciba 
los dos números, y devuelve si el primero es múltiplo del segundo.
*/

void EsMultiplo(int N1, int N2, int* result){

	if (N1 % N2 == 0){
		*result = N1 / N2;
	}
}

int main (){
	int num1, num2, result = 0;
		
	printf("Ingrese el primer numero: ");
	scanf("%d", &num1);
	
	printf("Ingrese el segundo numero: ");
	scanf("%d", &num2);
	
	if (num1 == 0 || num2 == 0){
		printf("Los numeros no pueden valer 0.");
	}else{
		if (num1 == num2){
			printf("Los numeros no pueden ser iguales.");
		}else{
			if (num1 < num2){
				printf("El primer numero no puede ser menor que el segundo.");
			}else{
				EsMultiplo(num1, num2, &result);
				printf("Es multiplo, %d = %d * %d", num1, num2, result);
			}
		}
	}
	
	return 0;
}
