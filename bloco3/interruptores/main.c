#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "portuguese");
	int opcao; 
	printf("\n\nDigite o Departamento");
	printf("\n\n1 - Vendas");
	printf("\n2 - Financeiro\n");
	scanf("%d", &opcao);
	
	// Estrutura switch
	switch(opcao){
		case 1: 
			system("cls");
			printf("VENDAS");
		break;
		case 2: 
			system("cls");
			printf("FINANCEIRO");
		break;
		default:
			printf("OPÇÃO INVÁLIDA!");
	}
	
	return 0;
}
