#include <stdio.h>
#include <string.h>
#include <locale.h>

// Criando uma struct
struct turmas{
	int codigo;
	char letra;
	char curso[30];
	float media;
};

int main() {
	//Configuração de localização
	setlocale(LC_ALL, "");
	
	// Criando uma variável do tipo struct
	struct turmas t1;
	struct turmas t2;
	struct turmas t3 = {103, 'C', "Full Stack", 9.6	};
	
	//Atribuir valores à struct
	t1.codigo = 101;
	t1.letra = 'A';
	t1.media = 8.5;
	strcpy(t1.curso,"Lógica de Programação");
	
	t2 = t1;
	
	strcpy(t3.curso,"DEV OPS");
	
	// Alterando o valor de um membro
	t2.codigo = 102;
	
	// Exibindo valores
	printf("%i \n", t1.codigo);
	printf("%c \n", t1.letra);
	printf("%s \n", t1.curso);
	printf("%.1f \n", t1.media);	
	printf("%d \n", t2.codigo);	
	printf("%s\n", t3.curso);
	
	return 0;
}





