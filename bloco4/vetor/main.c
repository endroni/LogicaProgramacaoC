#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "");
	int i, primos[] = {2, 3, 5, 7, 11};
	primos[5]= 13;
	
	for (i = 0; i < 6; i++){
		printf("Posi��o [%d] : %d \n",i, primos[i]);
	}
	
	return 0;
}
