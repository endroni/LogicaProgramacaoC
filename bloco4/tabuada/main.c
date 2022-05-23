#include <stdio.h>
#include <stdlib.h>

int main() {
	int numero, i;
	
	printf("Digite o numero da Tabuada: ");
	scanf("%i", &numero);
	
	for (i = 0; i < 11; i++){
		printf("%i x %i = %i \n", i, numero, i * numero);
	}
	return 0;
}





















