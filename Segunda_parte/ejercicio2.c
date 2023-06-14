#include <stdio.h>
#include <string.h>

int main(){
	char str1[200], str2[100];
	
	printf("Ingrese el primer texto:\n");
	fgets(str1, sizeof(str1), stdin);
	printf("Ingrese el segundo texto:\n");
	fgets(str2, sizeof(str2), stdin);
	
	strcat(str1, str2);
	printf("Este es el texto concatenado: %s", str1);
	
	return 0;
}
