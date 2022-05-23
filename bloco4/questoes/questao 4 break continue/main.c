#include <stdio.h>

int main() {
	int status, mes;
	float taxa = 0;
	for ( mes = 0; mes < 12; mes++ ){
		printf("Status da conta \n");
		printf("Digite 0 para fechada e 1 para aberta: ");
		scanf("%i", &status);		
		if (status == 0){
			break;
		}
		taxa += 10.00;
	}
	printf("Mensalidade a pagar R$ %f", taxa);
	return 0;
}


