#include <stdio.h>

const float VALOR = 7.49;
float litros;

float valorBomba(float, float);

int main() {
	litros = 10;
	float valorPagar = valorBomba(litros, VALOR);
	printf("Total: R$ %.2f", valorPagar);
	return 0;
}

float valorBomba(float litros, float VALOR){
	return litros * VALOR;
}





























