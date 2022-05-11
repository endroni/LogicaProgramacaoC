#include <stdio.h>
#include <stdlib.h>

int main() {
	// declarando variáveis e atribuindo valores
	int a = 10;
	float b = 5.5;
	double c = 2.5;
	char d = 'a';
	
	// Operador de Atribuição
	// a = a + 5;
	a += 10;	
	printf ("%i \n", a);
	
	b -= 1;
	printf("%f \n", b);
	
	// Operadores aritméticos
	
	c = b * a;
	printf("%f", c);
	return 0;
}