#include <stdio.h>

int main() {
	int i, vacinados = 4;
	
	for(i = 0; i < 10; i++){
		if (i == vacinados){
			break;
		}
		printf("Vacinar paciente %d\n", i);
	}
	return 0;
}
