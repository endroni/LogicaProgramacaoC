#include <stdio.h>

// Criando a fun��o valorItem

void valorItem(char descricao[20], int quantidade, float preco){
	printf("%s\n Total: R$ %.2f", descricao, quantidade * preco);		
}

int main() {
	// Chamando a fun��o
	valorItem("Chocolate", 5, 4.99);
		
	return 0;
}




