#include <stdio.h>

int main() {
	const double IOF = 6.38/100;
	double valorProduto = 100;
	double totalProduto = valorProduto + (valorProduto * IOF);	
	printf("%.2f", totalProduto);
	return 0;
}
