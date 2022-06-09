#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//Declara��o das fun��es
void menuPrincipal();
void despedida();

// Declarando vari�veis globais
int opcao;

int main(int argc, char *argv[]) {
	//Configura��o de idioma
	setlocale(LC_ALL, "");
	
	menuPrincipal();
	
	// Loop que fica chamando o menu
	do{
		menuPrincipal();
	}while(opcao != 0);
	
	
	// Chamando a despedida
	despedida();
	return 0;
}

// Definindo fun��es
void menuPrincipal(){
	system("cls");
	system("color 1F");
	printf("\n\n    MENU PRINCIPAL\n\n");
	printf("    1 - CONSULTAR\n");
	printf("    2 - DEP�SITO\n");
	printf("    3 - SAQUE\n");
	printf("    0 - SAIR\n");
	printf("\n\n    OP��O:   ");
	scanf("%i", &opcao);
}

void despedida(){
	system("cls");
	system("color 57");
	printf("\n\n    ADEUS E OBRIGADO PELOS PEIXES\n\n");
}

