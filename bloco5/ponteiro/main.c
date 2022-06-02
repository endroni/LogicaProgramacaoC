#include <stdio.h>

int main() {
	float latitude = -19.933252;
	double longitude = -43.924961;
	// Criando ponteiros de três formas diferentes
	double* ptr = &longitude;
	double *ptr2 = &longitude;
	double * ptr3 = &longitude;
	
	printf("%f\n", latitude);
	
	// Endereços de memória
	printf("%p\n", &latitude);
	printf("%x\n", &latitude);
	
	// Exibindo ponteiros
	printf("%p\n", ptr)	;
	printf("%p\n", ptr2);
	printf("%p\n", ptr3);
	
	// Desreferenciação
	printf("%lf", *ptr);
			
	
	return 0;
}
