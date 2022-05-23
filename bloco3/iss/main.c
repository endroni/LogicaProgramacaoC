#include <stdio.h>
#define ISS 0.025

int main() {
	float valorServico = 100;
	float imposto = valorServico * ISS;	
	printf("Imposto: R$ %.2f", imposto);
	return 0;
}
