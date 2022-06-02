#include <stdio.h>

const float VALOR = 7.49; 	// Constante global
float litros;				// Variáveis globais 

float valorBomba(float, float); // Declarando ou Protótipo

int main() {
	litros = 10;
	
	// variável local valorPagar
	float valorPagar = valorBomba(litros, VALOR);
	
	printf("Total a pagar R$ %.2f", valorPagar);
	
	return 0;
}

float valorBomba(float litros, float VALOR){	// Definindo a função
	return litros * VALOR;						
}
