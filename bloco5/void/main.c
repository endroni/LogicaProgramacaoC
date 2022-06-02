#include <stdio.h>

// Criando a função valorItem

void valorItem(char descricao[20], int quantidade, float preco){
	printf("%s\n Total: R$ %.2f", descricao, quantidade * preco);		
}

int main() {
	// Chamando a função
	valorItem("Chocolate", 5, 4.99);
		
	return 0;
}




