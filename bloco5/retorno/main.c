#include <stdio.h>

// Fun��o do tipo float
float valorBomba(float litros, float valor){	
	return litros * valor;
}

// Fun��o do tipo int
int dintancia(int velocidade, int horas){
	return velocidade * horas;
}

int main() {
	printf("Total a pagar R$ %.2f", valorBomba(10, 7.49));
	
	//atribuir o valor retornado da fun��o em uma vari�vel
	int percorrido = dintancia(60, 10);
	
	printf("\nDistancia percorrida foi de %i Km", percorrido);
	return 0;
}









