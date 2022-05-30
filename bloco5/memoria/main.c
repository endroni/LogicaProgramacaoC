#include <stdio.h>

int main() {
	double latitude = -19.93325248500424;
	double longitude = -43.92496137949454;
	double* ptr = &latitude;
	double *lat = &latitude;
	
	printf("%lf\n", latitude);
	printf("%p\n", &latitude);
	printf("%x\n", &latitude);
	printf("%lf\n", *ptr);// desreferenciação.
		
	return 0;
}
























