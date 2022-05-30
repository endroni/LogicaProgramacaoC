#include <stdio.h>
void valorItem(char descricao[20], int quantidade, float preco){
	printf("%s\nTotal: R$ %.2f", descricao, quantidade * preco);
}
int main() {
	valorItem("Chocolate", 4, 2.5);
	return 0;
}




























