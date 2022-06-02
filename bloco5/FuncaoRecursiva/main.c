#include <stdio.h>

// Declarar função
double fatorial(int n);

int main() {
	int numero;
	double f;
	
	printf("O programa realiza o calculo fatorial\n");
	printf("Digite um numero: ");
	scanf("%d", &numero);
	
	// Chamar (invocar) a função
	f = fatorial(numero);
	
	printf("Fatorial de %d = %.0lf", numero, f);
	
	getch();	
	return 0;
}

// Definindo a função 
double fatorial(int n){
	double valorFatorial; // Variável local
	
	if (n <= 1){
		return (1);		
	} else{
		valorFatorial = n * fatorial( n - 1); //Chamada recursiva
		return (valorFatorial);
	}
}
