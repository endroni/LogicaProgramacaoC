#include <stdio.h>

// Declarar fun��o
double fatorial(int n);

int main() {
	int numero;
	double f;
	
	printf("O programa realiza o calculo fatorial\n");
	printf("Digite um numero: ");
	scanf("%d", &numero);
	
	// Chamar (invocar) a fun��o
	f = fatorial(numero);
	
	printf("Fatorial de %d = %.0lf", numero, f);
	
	getch();	
	return 0;
}

// Definindo a fun��o 
double fatorial(int n){
	double valorFatorial; // Vari�vel local
	
	if (n <= 1){
		return (1);		
	} else{
		valorFatorial = n * fatorial( n - 1); //Chamada recursiva
		return (valorFatorial);
	}
}
