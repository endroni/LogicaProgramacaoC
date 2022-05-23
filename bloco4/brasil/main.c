#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "");
	printf("Acentuação! Como o portugues é diferente não é Elis? \n\n");
	printf ("Localidade corrente: %s\n", setlocale(LC_ALL,NULL) );
	return 0;	
}




































