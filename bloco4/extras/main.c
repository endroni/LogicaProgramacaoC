#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese");
	system("color 6");
	
	printf("\n\nMENU PRINCIPAL \n\n");
	system("pause");
	getch();
	
	system("cls");
	
	printf("\n\nSUB-MENU");
	
	return 0;
}
