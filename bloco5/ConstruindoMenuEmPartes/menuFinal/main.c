#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//Declara��o das fun��es
void menuPrincipal();
void despedida();
void consultarSaldo();
void deposito();
void saque();

// Declarando vari�veis globais
int opcao;
float saldo = 0, valor = 0;

int main(int argc, char *argv[]) {
	//Configura��o de idioma
	setlocale(LC_ALL, "");
	
	menuPrincipal();
	
	// Loop que fica chamando o menu
	do{		
		switch(opcao){
			case 1:
				consultarSaldo();
				menuPrincipal();
			break;	
			
			case 2:
				deposito();		
				menuPrincipal();
			break;
			
			case 3: 
				saque();
				menuPrincipal();
			break;
			
			default:
				menuPrincipal();
		}
	
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

void consultarSaldo(){
	system("cls");
	system("color 27");
	printf("\n\n    OP��O 1 SELECIONADA\n\n");
	printf("\n\n    SEU SALDO � DE \n\n");
	printf("\n\n	R$ %.2f \n\n", saldo);
	
	getch();
}

void deposito(){
	system("cls");
	system("color 37");
	printf("\n\n    OP��O 2 SELECIONADA \n\n");
	printf("\n\n    DIGITE O VALOR A SER DEPOSITADO \n\n");
	printf("\n\n    R$ ");
	scanf("%f", &valor);
	saldo = saldo + valor;
}

void saque(){
	system("cls");
	system("color 47");
	printf("\n\n    OP��O 3 SELECIONADA\n\n");
	printf("\n\n    SEU SALDO � DE \n\n");
	printf("\n\n    R$ %.2f\n\n", saldo);
	printf("\n\n    DIGITE O VALOR DO SAQUE \n\n");
	printf("\n\n    R$ ");
	scanf("%f", &valor);
	if (valor < saldo){
		saldo = saldo - valor;
		printf("    SAQUE EFETUADO COM SUCESSO....");
		getch();
	} else{
		printf("\n\n    SALDO INSUFICIENTE");
		getch();
	}
}

void despedida(){
	system("cls");
	system("color 57");
	printf("\n\n    ADEUS E OBRIGADO PELOS PEIXES\n\n");
}























