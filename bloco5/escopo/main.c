#include <stdio.h>

const float VALOR = 7.49; 	// Constante global
float litros;				// Vari�veis globais 

float valorBomba(float, float); // Declarando ou Prot�tipo

int main() {
	litros = 10;
	
	// vari�vel local valorPagar
	float valorPagar = valorBomba(litros, VALOR);
	
	printf("Total a pagar R$ %.2f", valorPagar);
	
	return 0;
}

float valorBomba(float litros, float VALOR){	// Definindo a fun��o
	return litros * VALOR;						
}
