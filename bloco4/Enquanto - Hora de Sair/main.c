#include <stdio.h>
#include <stdlib.h>

int main() {
	int hora = 9;

	printf("Sao %i horas\n", hora);
	
	while (hora < 13) {
		printf("Ainda sao %i horas\n", hora);
		hora = hora + 1;
	}
	printf("Finalmente, chegou  %i horas", hora);
	
	return 0;
}






















