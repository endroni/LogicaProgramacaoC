#include <stdio.h>
#include <string.h>
#include <locale.h>

// Criando o struct
struct produto{
	int codigo;
	char descricao[30];
	float preco;
};

int main() {
	setlocale(LC_ALL, "");
	// Criando a variável struct
	struct produto p1 = {01,"Monitor OLED",789.50 };
	struct produto p2 = {02,"RTX 3090", 20990};
	
	// Atualizando dados do produto 02
	strcpy(p2.descricao, "Placa de Vídeo RTX 3090");
	p2.preco = 18990;
	
	// Exibindo valores
	printf("Codigo: %i\n", p1.codigo);
	printf("Descricao: %s\n", p1.descricao);
	printf("Valor: R$ %.2f", p1.preco);
	printf("\n\n--------------------------\n\n");
	printf("Codigo: %i\n", p2.codigo);
	printf("Descricao: %s\n", p2.descricao);
	printf("Valor: R$ %.2f", p2.preco);
	
	getch();		
	return 0;
}


















