#include <stdio.h> // Importando a bibioteca para entrada e saída
#include <stdlib.h> // Biblioteca para comunicação com o Sistema Operacional

/*
O bloco main 
é o principal.
*/
int main() {
	// sintaxe para declarar variáveis 
		/* tipo nome */
	char letra_inicial; // char para caracteres
	int idade;	// Números inteiros
	float salarioPretendido;	// float para decimais
	
	// Inicializar uma variável - Atribuindo valores
	// com o operador de atribuição ( = )

	letra_inicial = 'R';
	idade = 38;
	salarioPretendido = 8000;
	
	// Saída de dados
	
	printf("Sua inicial e %c \n", letra_inicial);
	printf("Sua idade e %d \n", idade);
	printf("Pretencao salarial: %f", salarioPretendido);
	
	return 0;
}







