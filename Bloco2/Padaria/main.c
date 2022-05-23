#include <stdio.h>
#include <stdlib.h>

int main() {
	// Declarando variáveis
	float paoDeQueijo = 1.00;
	float coxinha = 2.00;
	float _cafe_pequeno = 0.50;
	float _cafe_com_leite = 0.90;
	int quantidade = 5;
	double valorTotal;
	double valorDesconto;
	
	// Calculando
	valorTotal = paoDeQueijo * quantidade;
	valorDesconto = valorTotal * 0.05;

	// Menu
	printf("_____________________________________ \n");
	printf("|-----------------------------------| \n|");
	printf("|Pao de Queijo ----|------- R$ 1.00| \n");
	printf("|Coxinha------------|------- R$ 2.00| \n");
	printf("|Cafe pequeno ------|------- R$ 0.50| \n");
	printf("|Cafe com leite ----|------- R$ 0.90| \n");
	printf("|-----------------------------------| \n\n\n|");
	
	// Adiciona uma pausa no sistema
	system("pause");
	
	// Limpa a tela
	system("cls");
	
	printf("_____________________________________ \n");
	printf("|-----------------------------------| \n|");
	printf("|Total R$ %lf ----------------|\n", valorTotal);
	printf("|Desconto de R$ %lf -----------| \n", valorDesconto);
	printf("|-----------------------------------| \n|");
	
	return 0;
}
