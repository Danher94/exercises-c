#include <stdio.h>
#include <string.h>

int main(){
	char letters[100], letters2[100];
	int i;
	
	printf("Ingrese el texto:\n");
	fgets(letters, sizeof(letters), stdin);
	
	for (i=0; letters[i] != '\0'; i++){
		letters2[i] = letters[i];
	}
	
	printf("Este es el texto que ingresaste:\n%s", letters2);
	
	return 0;
}
