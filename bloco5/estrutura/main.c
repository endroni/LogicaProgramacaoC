#include <stdio.h>

// Criando struct
struct turma{
	char nome;
	float mediaTurma;	
};

int main() {
	// Criando uma variável struct
	struct turma t1;
	
	// Atribuindo valores na struct
	t1.nome = 'A';
	t1.mediaTurma = 9.5;
	
	// Exibindo os dados
	printf("Turma: %c\n", t1.nome);
	printf("Media: %.1f ", t1.mediaTurma);
		
	return 0;
}























