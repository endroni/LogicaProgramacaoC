#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "utf-8");
	printf("Olá, aqui é um exemplo de acentuação \n");
	system("pause");
	return 0;
}