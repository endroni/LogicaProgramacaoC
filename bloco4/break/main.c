#include <stdio.h>

int main() {
	int i, vacinado = 4;
	
	for(i = 0; i < 10; i++){
		
		if ( i == vacinado){
			break;
		}
		
		printf("Vacinar paciente %i \n", i);
	}
	return 0;
}


















































