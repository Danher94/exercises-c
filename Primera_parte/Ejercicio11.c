#include <stdio.h>

int main(){
	int dividendo, divisor, cociente = 0;

    printf("Ingrese el dividendo: ");
    scanf("%d", &dividendo);

    printf("Ingrese el divisor: ");
    scanf("%d", &divisor);

    while (dividendo >= divisor) {
        dividendo -= divisor;
        cociente++;
    }

    printf("El cociente es: %d\n", cociente);
    printf("El residuo es: %d\n", dividendo);
	
	return 0;
}
