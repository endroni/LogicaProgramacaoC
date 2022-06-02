#include <stdio.h>
#include <math.h>

int main() {
	int raiz = sqrt(64);
	float potencia = pow(3,2);
	
	printf("A raiz quadrada de 64 = %i\n", raiz);
	printf("3 elevado a 2 = %.f\n", potencia);
	
	printf("Sua nota foi %.f, parabens!\n", ceil(9.4));
	printf("Sua nota foi %.f, estude mais\n", floor(7.8));
	
	printf("Para cima %.f \n", round(8.5));
	printf("Para baixo %.f \n", round(6.4));
	
	return 0;
}
